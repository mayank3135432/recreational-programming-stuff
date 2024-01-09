#include<stdio.h>
int search(int* A,int n,int key){
  for(int i = 0;i<n;i++){
    if(A[i]==key) return i;
  }
  return -1;
}
int main(){
  int k;
  int A[] = {3,1,5,-3,7};
  printf("enter key ");
  scanf("%d",&k);
  int pos = search(A,5,k);
  if(pos == -1){
    printf("not in array\n");
  }else{
    printf("in position %d\n",pos);
  }
  return 0;
}
