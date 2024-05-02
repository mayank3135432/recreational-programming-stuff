#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "trie.h"
int hashfunc(char x){
    return(x-'a');
}
trie* create(bool n){
    printf("create funcion is called\n");
    trie* new = (trie*)malloc(1*sizeof(trie));
    new->anend = n;
    for(int i=0;i<27;i++) new->children[i]=NULL;
    
    return new;
}
void insert(trie* root, char* name, int size){
    printf("insering function is called\n");
    int i = 0;
    for(i=0;i<size-1;i++){
        printf("%dth iteration\n", i);
        if(root->children[hashfunc(name[i])]==NULL) root->children[hashfunc(name[i])] = create(0);
        root = root->children[hashfunc(name[i])];
    }
    if(root->children[hashfunc(name[i])]==NULL) root->children[hashfunc(name[i])] = create(1);
    else root->children[hashfunc(name[i])]->anend = 1;
}
bool search(trie* root, char* name, int size){
    int i=0;
    for(i=0;i<size;i++){
        if(root->children[hashfunc(name[i])] == NULL) return 0;
        root = root->children[hashfunc(name[i])];
    }
    return 1;
}

