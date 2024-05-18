#include <stdlib.h>
#include <stdio.h>
#include"mystring.h"
mystring* make(char* X, int size, int max){
    mystring* y = (mystring*)malloc(sizeof(mystring));
    y->name = X; y->size = size; y->MAX = max;
    return y;
}
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
    char* temp = (char*)malloc(sizeof(char)*S.MAX);
    for(int i; i<S.size; i++){
        temp[i] = S.name[i];
    }
    W->words[W->size] = make(temp, S.size, S.MAX);
    W->size++;
    
}
void printstr(mywords W){
    printf("%d\n%d\n", W.size, W.MAX);
    printf("[");
    for(int i=0; i<W.size; i++)
        printf("%s, ", W.words[i]->name);
    printf("]");
}
