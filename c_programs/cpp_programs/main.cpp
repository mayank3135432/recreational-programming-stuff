#include<iostream>
//#include<stdlib.h>
#include"libraries/stack.hpp"
int main(){
    stack<char> S(5);
    /*
    Bool :- 0 -> False
            1 or any other number -> True
    */
    S.push(78);
    S.push(76);
    S.push(82);
    S.push(71);
    S.push(96);
    S.pop();
    S.pop();
    S.print();

    return 0;
}