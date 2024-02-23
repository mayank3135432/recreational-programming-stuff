#!/usr/bin/env python

import ctypes as cts
import sys

import numpy as np


DLL_NAME = "./dll00.{:s}".format("dll" if sys.platform[:3].lower() == "win" else "so")


def np_mat_type(rows, cols, element_type=float):
    return np.ctypeslib.ndpointer(dtype=element_type, shape=(rows, cols), flags="C_CONTIGUOUS")


def main(*argv):
    np.set_printoptions(precision=3)
    rows0 = 5
    cols0 = 4
    kernel_size = 3
    rows1 = 3
    cols1 = 6
    mat0 = np.random.randn(rows0, cols0).astype(cts.c_double)
    mat1 = np.random.randn(rows1, cols1).astype(cts.c_double)

    dll = cts.CDLL(DLL_NAME)
    matrix_func = dll.matrixFunc
    matrix_func.argtypes = (
        np_mat_type(rows0, cols0), cts.c_size_t, cts.c_size_t,
        np_mat_type(rows1, cols1), cts.c_size_t, cts.c_size_t)
    matrix_func.restype = np_mat_type(rows0, cols0)

    dealloc_array = dll.deallocArray
    dealloc_array.argtypes = (np_mat_type(rows0, cols0),)
    dealloc_array.restype = None

    print("mat0:")
    print(mat0)
    print("\nmat1:")
    print(mat1)
    mat_res = matrix_func(mat0, rows0, cols0, mat1, rows1, cols1)
    print("result:")
    print(mat_res)
    print("\nequality:", np.all(mat_res == mat0))

    dealloc_array(mat_res)


if __name__ == "__main__":
    print("Python {:s} {:03d}bit on {:s}\n".format(" ".join(elem.strip() for elem in sys.version.split("\n")),
                                                   64 if sys.maxsize > 0x100000000 else 32, sys.platform))
    rc = main(*sys.argv[1:])
    print("\nDone.\n")
    sys.exit(rc)

