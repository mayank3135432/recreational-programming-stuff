#include<stdio.h>
#include "trie.h"
int main(){
    trie* mylist = create(0);
    insert(mylist, "hello", 3);
    return 0;
}