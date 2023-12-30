#include<stdio.h>
int HCF(int x,int y){//x must be greater than y
	if(x%y==0) return y;
	else return HCF(y,x%y);
}
int main(){
	int a,b;
	scanf("%d",&a);scanf("%d",&b);
	if(a>b)
		printf("%d\n",HCF(a,b));
	else
		printf("%d\n",HCF(b,a));
	return 0;
}
