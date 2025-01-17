#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "trie.h"
int hashfunc(char x){
    return(x-'a');
}
trie* create(bool n){
    //printf("create funcion is called\n");
    trie* new = (trie*)malloc(1*sizeof(trie));
    new->anend = n;
    for(int i=0;i<27;i++) new->children[i]=NULL;
    
    return new;
}
void insert(trie* root, char* name, int size){
    //printf("insering function is called\n");
    int i = 0;
    for(i=0;i<size-1;i++){
        //printf("%dth iteration\n", i);
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
int counter = 0;
void collect(trie* root, mywords* words, mystring name){
    counter++;
    //printf("counter at %d\n name is: %s\n",counter, name.name);
    printstr(*words);
    if(root->anend) pushwords(words, name);
    for(int i=0; i<27; i++){
        if(root->children[i] != NULL){
            push(&name, i+'a');
            printf("\ncall to %c\n", 'a'+i);
            collect(root->children[i], words, name);
            printf("\nout of %c\n", 'a'+i);
        }
    }
}
