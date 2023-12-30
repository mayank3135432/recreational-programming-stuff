#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 100
void get(char name[]){
	for(int i=0;i<BUFFER_SIZE;i++){
		scanf("%c",&name[i]);
		if(name[i]==10){
			//printf("okay_I_am_going");
			name[i]=0;
			return;
		}
	}

}
int put(char name[]){
	int i;
	for(i=0;i<BUFFER_SIZE && name[i]!=0;i++){
		printf("%c",name[i]);
	}
	printf("\n");
	return(i);
}

int main(){
	char name[BUFFER_SIZE];
	get(name);

	for(int i=0;name[i]!=0;i++)
		printf("%c",name[i]);
	
	printf("\n");
	return 0;
}
