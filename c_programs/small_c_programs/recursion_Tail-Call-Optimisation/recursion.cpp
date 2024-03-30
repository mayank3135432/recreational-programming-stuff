#include<iostream>
int foo(int a){
  std::cout << a << "\n";
	return foo(a+1);
}
int main(int argc, char** argv){
  int a=0;
  sscanf(argv[1],"%d", &a);
  foo(a);
  return 0;
}
