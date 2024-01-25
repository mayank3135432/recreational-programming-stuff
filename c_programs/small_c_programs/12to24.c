#include<stdio.h>
int main(){
  char time[] = "12:50:22";
  int h,m,s;
  sscanf(time,"%d:%d:%d", &h,&m,&s);
  printf("\n%d\n%d\n%d\n",h,m,s);

  return 0;
}
