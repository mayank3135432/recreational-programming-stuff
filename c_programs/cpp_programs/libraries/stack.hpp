#include<iostream>
template <typename Type>
struct stack{
    int top;
    Type* arr;
    int len;
    stack(int size){//Constructor
        len=size;
        top=-1;
        arr=new Type[size];
    }
    Type& operator[](int i){
        return arr[i];
    }
    void print(){
        for(int i=top;i>=0;i--){
            std::cout<<arr[i]<<"\n";
        }
    }
    bool isfull(){
        return(top==len-1);
    }
    bool iskali(){
        return(top==-1);
    }
    void push(Type x){
        if(isfull()) printf("STACK OVERFLOW\n");
        else arr[++top]=x;
    }
    Type pop(){
        if(iskali()){
            printf("STACK UNDERFLOW");
            return(0);
        }
        else return(arr[top--]);
    }
};