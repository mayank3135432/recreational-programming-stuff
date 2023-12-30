#include<stdio.h>

void recursive_function(void) {
    recursive_function();
}

int main(void) {
    recursive_function();
    return 0;
}