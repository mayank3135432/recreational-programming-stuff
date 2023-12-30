#include<stdio.h>
int main(){
    int arr[3];
    int i,j,temp;
    //input the 3 numbers onto an array
    for(i=0;i<3;i++) scanf("%d",&arr[i]);
    
    //sort the array
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                //swap arr[i],arr[j]
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //Now check whether given numbers are pytha-triple or not
    if(arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1]) printf("Yes\n");
    else printf("No\n");
}