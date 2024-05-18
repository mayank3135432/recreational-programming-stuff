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
    putin("bat");
    putin("bats");
    putin("cat");
    putin("catnip");
    putin("dogs");
    putin("dog");
    putin("doggo");
    putin("bat");
    putin("batter");
    putin("butter");
    putin("bad");
    putin("fizz");
    putin("buzz");
    putin("zoo");
    putin("zoomer");
    putin("boomer");
    putin("quater");
    putin("quaternion");
    putin("complex");
    putin("real");
    putin("measure");
    putin("theory");
    putin("art");
    putin("artsy");
    putin("artist");
    putin("water");
    putin("ice");
    putin("icy");
    putin("cake");

    printf("\n%d\n",search(mylist, "bit", 3));
    /* 
    mystring ART = {"", 0, 100};
    mywords LIST = {NULL, 0, 100};
    ART.name = (char*)malloc(sizeof(char)*100);
    LIST.words = (mystring*)malloc(100*sizeof(mystring));

    collect(mylist, &LIST, ART);
    printstr(LIST);

    free(ART.name);
    free(LIST.words);
 */
    return 0;
}