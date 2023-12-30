#include<stdio.h>
#include<stdlib.h>
#include"postfix.h"
char infix[MAX];//string containing given input of infix boolean expression
char postfix[MAX];//string that will eventually contain the postfix equivalent of given boolean expression
int load=-1;//treat postfix kind of like a stack
int top=-1;//top being -1 means stack is kali
char stack[MAX];
char stacktop(){//returns top element of stack
    return(top>=0?stack[top]:0);//returns null char if stack is empty
}
int iskali(){//return 1 if top is -1
    return(top==-1 ? 1 : 0);
}
void printstack(){//prints out the stack
//used for debugging
    int i;
    printf("{ ");
    for(i=0;i<=top;i++){
        printf("%c ,",stack[top]);
    }
    printf("\b}");
}
int isoperator(char x){//checks whether given char is an operator or not
    return((x=='=' || x=='>' || x=='v' || x=='&' || x=='~' || x=='-' || x=='V' || x=='^'));
}
int isletter(char x){//any small or capital letter except v or V
    return(((65<=x && x<=90) || (97<=x && x<=122)) && (x!='v' && x!='V'));
}
int prec(char x){//order of precedence "~" > "&" > "v" > ">" > "=" > "("
    if(x=='(') return 0;
    else if(x=='=') return 1;
    else if(x=='>') return 2;
    else if(x=='v' || x=='V') return 3;
    else if(x=='&' || x=='^') return 4;
    else if(x=='~' || x=='-') return 5;
    else return -1;
}
void keep(char x){//push a char onto postfix[]
    postfix[++load]=x;
}
char pop(){//remove element from stack and push them in postfix[];
    keep(stacktop());
    return(stack[top--]);
}
void push(char x){//push char on to stack
    if(prec(x)>prec(stacktop())){//if x has more precedence than the existing top element, then x can sit on top of it.
        top++;
        stack[top]=x;//the edge case of the stack being empty is also handled as stacktop return '\0'(which has precedence of -1) when top==-1.
    }
    else{//else 
        pop();//pop the topmost element
        push(x);//recursivly try again
    }
}
void inttopos(){
    int i;
    for(i=0;infix[i];i++){
        if(isletter(infix[i])){//if element is a letter, push it onto postfix
            keep(infix[i]);
        }
        else if(isoperator(infix[i])){//if element is a operator, push it onto stack
            push(infix[i]); 
        }
        else if(infix[i]=='('){//if '(' then push it forcibly onto stack
            stack[++top]='(';//forcibly keep (
        }
        else if(infix[i]==')'){//if '). then pop every element from stack till you reach '(' as top element
            while(stacktop()!='(') pop();
            top--;//get rid of (
        }
        else if(infix[i]==32){//if SPACEBAR then continue
            continue;
        }
    }
    //when you reach end of infix[] , pop all remaining elements from stack
    while(!iskali()){
        pop();
    }
    keep(0);//append NULL character to postfix[] string 
}






/*

int evalstack[MAX];//int stack that will evaluate the postfix expression
int etop;

int eval2(int* P){
    int i;
    char x;
    int count=-1;
    char stack[2];
    for(i=0;i<=load;i++){
        x=postfix[i];
        if(isletter(x)){
            if(count==-1 || stack[count]!=x)
            stack[++count]=x;
        }
    }
    
}

*/
