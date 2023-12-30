#include<stdio.h>
#define MAX 6
//int arr[MAX];
void init(int* arr,int num,int size){
	for(int i=0;i<size;i++){
		arr[i]=num;
	}
}
int arr[MAX]=init(arr,100,MAX);

int main(){
	//init(arr,100);
	for(int i=0;i<MAX;i++){
		printf("%d,",arr[i]);
	}
	printf("\n");
}
