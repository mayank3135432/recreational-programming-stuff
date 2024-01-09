/*Write program to find sum of n elements*/
#include<stdio.h>
int main(){
  int n;
  printf("enter number of elements ");
  scanf("%d",&n);
  int sum = n*(n+1)/2;
  printf("sum of integers 1 to %d is %d\n",n,sum);
  return 0;
}
