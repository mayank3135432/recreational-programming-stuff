void foo(int n){
    if(n==0) return;
    else foo(n-1);
}
int main(){
    foo(261250);//261250<=x<262500
    return 0;
}