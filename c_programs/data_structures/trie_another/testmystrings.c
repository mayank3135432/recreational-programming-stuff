#include<stdio.h>
#include<stdlib.h>
#include"mystring.h"
int main(){
    mystring ART = {"", 0, 100};
    ART.name = (char*)malloc(sizeof(char)*100);
    push(&ART, 'a');
    push(&ART, 'r');
    push(&ART, 't');
    printf("%s\n", (&ART)->name);

    return 0;
}