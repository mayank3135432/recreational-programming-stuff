#include<stdio.h>
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

    printf("\n%d\n",search(mylist, "but", 3));
    printf("\n%d\n",search(mylist, "bit", 3));

    return 0;
}