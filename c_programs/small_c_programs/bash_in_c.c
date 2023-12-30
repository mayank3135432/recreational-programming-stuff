#include<stdlib.h>
int main(){
    char* name="cd ..";//"firefox https://github.com/lowlevellearning";
    char* name1="ls";
    char* name2="cd c_programs/big_c_programs";
    char* name3="ls -l";
    system(name);
    system(name2);
    system(name3);
    
    return 0;
}