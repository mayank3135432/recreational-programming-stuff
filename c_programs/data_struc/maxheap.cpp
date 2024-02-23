// C++ program to illustrate the
// iterators in vector
#include <execution>
#include <iostream>
#include <vector>
 
using namespace std;

struct maxheap{
  int* data;
  int top;
  int size;
  maxheap(int max){
    data=new int[size];
    top=0;
    size=max;
  }
  int root_node(){
    return data[0];
  }
  int last_node(){
    return data[size-1];
  }
  // leftchild(n)=2n+1
  // rightchild(n)=2n+2
  int left_child_index(int index){
    return (2*index+1);
  }
  int right_child_index(int index){
    return(2*index+2);
  }
  int parent_index(int index){
    return((index-1)/2);
  }
  void insert(int value){
    data[++top]=value;
    int temp=top;
    while(temp>data[parent_index(temp)]){
      int sw=data[temp];
      data[temp]=data[parent_index(temp)];
      data[parent_index(temp)]=sw;
      temp=parent_index(temp);
    }
  }
};





