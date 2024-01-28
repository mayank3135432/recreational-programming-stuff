/*Program to generate truth table of given bool expression
Step 1: Input bool expression
    & is AND
    v is OR
    > is implication (conditional)
    ~ is negation
    = is equivalence (biconditional)
Step 2: Converts given expression into postfix
Step 3: .....
***In Progress***
*/

#include<stdio.h>
#include<stdlib.h>
//#include"bool.h"
#include"postfix.h"
int main(){
    char x;
    fgets(infix,MAX,stdin);
    fflush(stdin);
    inttopos();
    //fputs(postfix,stdin);
    
    for(int i=0;i<=load;i++){
        printf("%c",postfix[i]);
    }
    printf("\n");
    return 0;
}