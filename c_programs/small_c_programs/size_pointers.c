#include<stdio.h>
int main(){
  printf("void* %u\nvoid** %u\nchar* %u\nchar** %u\nint* %u\nint** %u\nlong double %u*\nlong double** %u\n",sizeof(void*),sizeof(void**),sizeof(char*),sizeof(char**),sizeof(int*),sizeof(int**),sizeof(long double*),sizeof(long double**));

  return 0;
}
