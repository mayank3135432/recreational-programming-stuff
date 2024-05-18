#include<stdio.h>
#include<stdlib.h>
#include "trie.h"
#include<string.h>
trie* mylist;
void putin(char* name){
    insert(mylist, name, strlen(name));
}
int main(){
    mylist = create(0);
    putin("hello");
    putin("helloworld");

    //printf("\n%d\n",search(mylist, "helloworld", 3));
     
    mystring ART = {"", 0, 100};
    mywords LIST = {NULL, 0, 100};
    ART.name = (char*)malloc(sizeof(char)*100);
    LIST.words = (mystring**)malloc(100*sizeof(mystring*));

    collect(mylist, &LIST, ART);
    printstr(LIST);

    free(ART.name);
    free(LIST.words);

    return 0;
}