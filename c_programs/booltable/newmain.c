/*START DATE - appprox 30Aug2023*/
/*Goal: Program to generate truth table of given bool expression
Step 1: Input bool expression
    ^ is AND
    v is OR
    > is implication (conditional)
    ~ is negation
    = is equivalence (biconditional)
Step 2: Converts given expression into postfix
Step 3: Evaluate Postfix Expression for variables p,q,r
NEXT STEP: Evaluate Postfix Expression in n number of arbitary variables......
***In Progress***
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100


//NOT(AND(AND(A,B),C))

int AND(int a,int b){
    return(a&&b);
}
int OR(int a,int b){
    return(a||b);
}
int NOT(int a){
    if(a>0) return 0;
    else return 1;
}
int IMPLIES(int a,int b){
    //correct(&a,&b);
    return(OR(NOT(a),b));
    //return 0;
}
int BICOND(int a,int b){
    if(a==b) return 1;
    else return 0;
}




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
char infix[MAX];//string containing given input of infix boolean expression
char postfix[MAX];//string that will eventually contain the postfix equivalent of given boolean expression
int load=-1;//treat postfix kind of like a stack
/* void status(){
    printf("stack top is %c\nstack size is %d\npostfix size is %d\n",stacktop(),top,load);
    printstack();
    printf("\n\n");
} */
int isoperator(char x){//checks whether given char is an operator or not
    return((x=='=' || x=='>' || x=='v' || x=='&' || x=='V' || x=='^'));
}
int isunaryoperator(char x){//checks whether given char is an operator or not
    return((x=='~' || x=='-'));
}
int isletter(char x){//any small or capital letter except v or V
    return(((65<=x && x<=90) || (97<=x && x<=122)) && (x!='v' && x!='V'));
}
int prec(char x){//order of precedence "~" > "&" > "v" > ">" > "=" > "("
    if(x=='(') return 0;
    else if(x=='=') return 1;
    else if(x=='>') return 2;
    else if(x=='v' || x=='V' || x=='+') return 3;
    else if(x=='&' || x=='^' || x=='*') return 4;
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
int inttopos(){
    int i;
    int numberofvariables=0;
    for(i=0;infix[i];i++){
        if(isletter(infix[i])){//if element is a letter, push it onto postfix
            keep(infix[i]);
            numberofvariables++;
        }
        else if(isoperator(infix[i])||isunaryoperator(infix[i])){//if element is a operator, push it onto stack
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
    return(numberofvariables);
}
int eval2(int values[2]){
    int* evalstack=(int*)malloc(MAX*sizeof(int));
    int evaltop=-1;
    int i,j=0;
    //int variables[2];
    //for(i=0;i<=load;i++){
        //if(isletter(postfix[i])) variables[j++]=postfix[i];
    //}
    for(i=0;i<=load;i++){
        /*
        isletter-- push onto eval stack
        isunaryoperator-- pop one element, push ~element
        is_operator-- pop 2 elements(let's say a,b), push pxq (whwere x is the operator)
        */
       int hold;
       if(postfix[i]=='p'){
        evalstack[++evaltop]=values[0];
       }
       else if(postfix[i]=='q'){
        evalstack[++evaltop]=values[1];
       }
      else if(isunaryoperator(postfix[i])){//NEGATION
        //top--;
        evalstack[evaltop]=NOT(evalstack[evaltop]);        
       }
       else if(postfix[i]=='v'||postfix[i]=='+'||postfix[i]=='V'){//DISJUNCTION
        evalstack[evaltop-1]=OR(evalstack[evaltop],evalstack[evaltop-1]);
        evaltop--;
       }
       else if(postfix[i]=='^'||postfix[i]=='&'){//CONJUNCTION
        evalstack[evaltop-1]=AND(evalstack[evaltop],evalstack[evaltop-1]);
        evaltop--;
       }
       else if(postfix[i]=='>'){//CONDITIONAL
        evalstack[evaltop-1]=IMPLIES(evalstack[evaltop-1],evalstack[evaltop]);
        evaltop--;
       }
       else if(postfix[i]=='='){//BICONDITIONAL
        evalstack[evaltop-1]=BICOND(evalstack[evaltop],evalstack[evaltop-1]);
        evaltop--;
       }
    }
    int hold=evalstack[evaltop];
    free(evalstack);
    return(hold);
}

int hashtable[50];
int hashmap(char x){
    if(97<=x&&x<=117) return(x-97);
    else if(119<=x&&x<=122) return(x-98);
    else if(65<=x&&x<=85) return(x-40);
    else if(87<=x&&x<=90) return(x-41);
    else return -1;
}
char invhashmap(int n){
    if(n>=0&&n<=20) return(n+97);
    else if(n>=21&&n<=24) return(n+98);
    else if(n>=25&&n<=45) return(n+40);
    else if(n>=46&&n<=49) return(n+41);
}

int evaluate(int* values){
    int* evalstack=(int*)malloc(MAX*sizeof(int));
    int evaltop=-1;
    int i,j=0,num=0;
    for(i=0;i<=load;i++){
        if(isletter(postfix[i])){
            if(hashtable[hashmap(postfix[i])]) continue;//skip loop if char already read
            hashtable[hashmap(postfix[i])]=1;
            num++;
        }
        //if(isletter(postfix[i])) variables[j++]=postfix[i];
    }
    int* variables=(int*)malloc(num*sizeof(int));
    for(i=0;i<50;i++){
        if(hashtable[i]){
            variables[j]=invhashmap(i);
            j++;
        }
    }
    //j=0;

    for(i=0;i<=load;i++){
        /*
        isletter-- push onto eval stack
        isunaryoperator-- pop one element, push ~element
        is_operator-- pop 2 elements(let's say a,b), push pxq (whwere x is the operator)
        */
       if(isletter(postfix[i])){
        for(j=0;j<num;j++){
            if(postfix[i]==variables[j]) evalstack[++evaltop]=values[j];
        }
       }
       else if(isunaryoperator(postfix[i])){//NEGATION
        //top--;
        evalstack[evaltop]=NOT(evalstack[evaltop]);        
       }
       else if(postfix[i]=='v'||postfix[i]=='+'||postfix[i]=='V'){//DISJUNCTION
        evalstack[evaltop-1]=OR(evalstack[evaltop],evalstack[evaltop-1]);
        evaltop--;
       }
       else if(postfix[i]=='^'||postfix[i]=='&'){//CONJUNCTION
        evalstack[evaltop-1]=AND(evalstack[evaltop],evalstack[evaltop-1]);
        evaltop--;
       }
       else if(postfix[i]=='>'){//CONDITIONAL
        evalstack[evaltop-1]=IMPLIES(evalstack[evaltop-1],evalstack[evaltop]);
        evaltop--;
       }
       else if(postfix[i]=='='){//BICONDITIONAL
        evalstack[evaltop-1]=BICOND(evalstack[evaltop],evalstack[evaltop-1]);
        evaltop--;
       }

    }
    int hold=evalstack[evaltop];
    free(evalstack);
    //the below is just a print line for debugging
    //printf("\n\n%d| %d %d %d\n\n",evaltop,evalstack[0],evalstack[1],evalstack[evaltop]);
    return(hold);
}

void inc(int* bin,int n){
    if(n==0){//edge case whenever MSB is 1;
        bin[n]=1;
        return;
    }
    if(bin[n]==0) bin[n]=1;
    else{
        bin[n]=0;
        inc(bin,n-1);
    }
}

char maptoTF(int n){
    if(n==0) return 'F';
    else if(n==1) return 'T';
    else return 'r';
}
int pov2(int n){
    int N=1;
    for(int i=0;i<n;i++){
        N=2*N;
    }
    return(N);
}

void menu(){
    printf("------------------------------------------------------Boolean Table------------------------------------------------------\n\n");
    printf("Input bool expression\n^ is AND \nv is OR\n> is implication (conditional)\n~ is negation\n= is equivalence (biconditional)\n\n");
    printf("\n__________________ENTER A BOOL EXPRESSION IN 4 VARIABLES p,q,r,s__________________\n\n");

}
int main(){
    menu();
    char x;
    int choice,numvar;
    //printf("first enter how many variables you want in your expression(2,3 or 4) and then enter the bool expression\n");
    //scanf("%d\n",&choice);fflush(stdin);
    fgets(infix,MAX,stdin);
    fflush(stdin);
    numvar=inttopos();
    //fputs(postfix,stdin);
    
    for(int i=0;i<=load;i++){
        printf("%c",postfix[i]);
    }
    printf("\n%d\n",numvar);

    //evaluate
    int* arr=(int*)calloc(numvar,sizeof(int));//for(int i=0;i<numvar;i++){arr[i]=0;}
    //int Q[]={0,0,1};inc(Q,2);for(int k=0;k<3;k++){printf("%d,",Q[k]);}
    int NUV=pov2(numvar);
    for(int i=0;i<NUV;i++){
        for(int j=0;j<numvar;j++){
            printf("%d|",arr[j]);
        }
        printf("\b || %d",evaluate(arr));
        printf("\n");
        inc(arr,numvar-1);
    }


    /* for(int i=0;i<2*2*2;i++){
        printf("%d|%d|%d||%d",arr[0],arr[1],arr[2],evaluate(arr));
        inc(arr,2);
    } */
    
    
    return 0;
}
