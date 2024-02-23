#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#if defined(_WIN32)
#  define DLL00_EXPORT_API __declspec(dllexport)
#else
#  define DLL00_EXPORT_API
#endif

#define ELEMENT_TYPE double

#if defined(__cplusplus)
extern "C" {
#endif

DLL00_EXPORT_API ELEMENT_TYPE* matrixFunc(const ELEMENT_TYPE *pMat0, size_t rows0, size_t cols0, const ELEMENT_TYPE *pMat1, size_t rows1, size_t cols1);
DLL00_EXPORT_API void deallocArray(ELEMENT_TYPE *pMat);

#if defined(__cplusplus)
}
#endif


ELEMENT_TYPE* matrixFunc(
    const ELEMENT_TYPE *pMat0,
    size_t rows0,
    size_t cols0,
    const ELEMENT_TYPE *pMat1,
    size_t rows1,
    size_t cols1)
{
    size_t matSize = sizeof(ELEMENT_TYPE) * cols0 * rows0;
    ELEMENT_TYPE *pRet = (ELEMENT_TYPE*)(malloc(matSize));

    printf("\nC: - 1st matrix (%zu, %zu):\n", rows0, cols0);
    memcpy(pRet, pMat0, matSize);  // Faster than setting each element individually
    for (size_t i = 0; i < rows0; ++i) {
        for (size_t j = 0; j < cols0; ++j) {
            printf("%3.3f ", pMat0[i * cols0 + j]);
            //pRet[i * cols0 + j] = pMat0[i * cols0 + j];
        }
        printf("\n");
    }

    printf("\nC: - 2nd matrix (%zu, %zu):\n", rows1, cols1);
    for (size_t i = 0; i < rows1; ++i) {
        for (size_t j = 0; j < cols1; ++j) {
            printf("%3.3f ", pMat1[i * cols1 + j]);
        }
        printf("\n");
    }

    printf("\n");
    return pRet;
}


void deallocArray(ELEMENT_TYPE *pMat)
{
    if (pMat)
        free(pMat);
}
