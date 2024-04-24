/* YES 
 * continue WiLL skip an iteration
 * */
#include<stdio.h>
int main(){
  int a=0;
  scanf("%d",&a);
  for(int i=1;i<5;i++){
    if(a && i==3) continue;
    printf("%d\n",i);
  }
  return 0;
}
