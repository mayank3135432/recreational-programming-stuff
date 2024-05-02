#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct trie{
    struct trie** children;
    bool anend;
}; typedef struct trie trie;
int hashfunc(char x){
    return(x-97);
}
trie* create(bool n){
    trie* new;
    new->children = (trie**)malloc(27*sizeof(trie*));
    for(int i=0;i<27;i++) new->children[i]=NULL;
    new->anend = n;
    return new;
}
void insert(trie* root, char* name, int size){
    int i = 0;
    for(i=0;i<size-1;i++){
        if(root->children[hashfunc(name[i])]==NULL) root->children[hashfunc(name[i])] = create(0);
        root = root->children[hashfunc(name[i])];
    }
    if(root->children[hashfunc(name[i])]==NULL) root->children[hashfunc(name[i])] = create(1);
    else root->children[hashfunc(name[i])]->anend = 1;
}

