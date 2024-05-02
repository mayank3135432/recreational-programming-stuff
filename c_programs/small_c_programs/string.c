#include <stdio.h>
int main(){
    char ch;
    char s[100];
    char sen[100];
    scanf("%c\n",&ch);
  fgets(s, 100, stdin);
  fgets(sen, 100, stdin);
    printf("%c\n%s%s",ch,s,sen);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
