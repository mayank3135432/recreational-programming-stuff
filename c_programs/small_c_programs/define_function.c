#include<stdio.h>
#define PI 3.14159
#define square(num) (num*num)
#define circle(rad) (PI*rad*rad)

int main(){
  int ix = 4;
  double fx = 7;
  char cx = 'a';
  printf("%lf\n%lf\n%lf\n",square(ix), square(fx), square(cx));

  return 0;
}
