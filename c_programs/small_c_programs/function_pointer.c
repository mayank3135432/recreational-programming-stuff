int foo(int a, char ch){
  a += ch;
  return(a);
}
int main(){
  int (*ptr)(int, char);
  ptr = &foo;

  return 0;
}
