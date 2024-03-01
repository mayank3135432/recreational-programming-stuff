#include<stdio.h>
void reverse(char* begin,char* end){
  char tmp;
  while(begin<end){
    tmp=*begin;
    *begin=*end;
    *begin++;
    *end=tmp;
    *end--;
  }
}

void revwords(char* X){
  char* start = X;
 
  char* temp = X;
 
  while (*temp){
    temp++;
    if (*temp==0) {
      reverse(start, temp - 1);
    }
    else if (*temp==' ') {
      reverse(start, temp-1);
      start=temp+1;
    }
  }
 
  reverse(X, temp-1);
}

int main(){
  char s[] = "i like this program very much";
  char* temp = s;
 
  // Driver code
  revwords(s);
  printf("%s", s);
  return 0;
}