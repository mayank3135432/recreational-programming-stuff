#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct trie{
    struct trie** children;
    bool anend;
}; typedef struct trie trie;
int hashfunc(char x);
trie* create(bool n);
void insert(trie* root, char* name, int size);