#include<stdio.h>
void printrev(int* arr,int n){
  int i;
  printf("\n{");
  for(i=0;i<n;i++){
    printf("%d,",arr[n-1-i]);
  }
  printf("\b}\n");
}
int main(){
  int arr[] = {2,1,5,3,8};
  printrev(arr,5);

  return 0;
}
