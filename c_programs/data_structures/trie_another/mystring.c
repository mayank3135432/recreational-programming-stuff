#include <stdlib.h>
#include <stdio.h>
#include"mystring.h"
void push(mystring* S, char x){
    if(S->size == S->MAX){
        S->name = reallocarray(S->name, 2*S->size, sizeof(char));
        S->MAX *= 2;
    }
    S->name[S->size] = x;
    S->size++;
    S->name[S->size] = 0;
}
void pushwords(mywords* W, mystring S){
    if(W->size == W->MAX){
        W->words = reallocarray(W->words, 2*W->size, sizeof(mystring));
        W->MAX *= 2;
    }
    /* mystring* new = (mystring*)malloc(sizeof(mystring));
    new->MAX = S.MAX;
    new->size = S.size;
    new->name = (char*)malloc(sizeof(char)*new->MAX);
    for(int i; i<new->size; i++){
        new->name[i] = S.name[i];
    } */
    mystring new = S;
    W->words[W->size] = new;
    W->size++;
    
}
void printstr(mywords W){
    printf("%d\n%d\n", W.size, W.MAX);
    printf("[");
    for(int i=0; i<W.size; i++)
        printf("%s, ", W.words[i].name);
    printf("]");
}
