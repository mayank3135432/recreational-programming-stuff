#define PY_SSIZE_TCLEAN
#include</usr/include/python3.11/Python.h>

static PyObject* spam_system(PyObject* self,PyObject* args){
  const char* command;
  int sts;
  if(!PyArg_ParseTuple(args,"s",&command)) return NULL;
  sts=system(command);
  return PyLong_FromLong(sts);
}

static PyMethodDef SpamMethods[] = {
  {"system", spam_system, METH_VARARGS, "Execute a shell command."},
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef spammodule={PyModuleDef_HEAD_INIT,"spam","systemspam",-1,SpamMethods};

PyMODINIT_FUNC PyInit_spam(void){
  return PyModule_Create(&spammodule);
}
