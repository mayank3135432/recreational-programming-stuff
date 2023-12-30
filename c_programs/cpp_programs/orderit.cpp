#include<iostream>
template <typename Type>
struct array{
    Type* arr;
    int len;
    array(int size){
        len=size;
        arr=new Type[size];
    }
    Type& operator[](int i){
        return arr[i];
    }
    /* void print(){
        printf("{");
        for(int i=0;i<len;i++){
            printf("%d,",arr[i]);
        }printf("\b}\n");
    } */
    void print(){
        std::cout<<"{";
        for(int i=0;i<len;i++){
            std::cout<<arr[i]<<",";
            //printf("%d\n",arr[i]);
        }std::cout<<"\b}\n";
    }
    void insert(Type data,int ind){
        len++;
        for(int i=len-1;i>=ind;i--){
            arr[i+1]=arr[i];
        }
        arr[ind]=data;
    }
};
//typedef struct array array;
//using typedef causes some issue
int main(){
    int a=5;
    array<double> A(a);
    for(int i=0;i<A.len;i++){
        A[i]=i*2;
    }
    A.insert(7,3);
    A.print();
}

