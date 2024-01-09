#include<stdio.h>
#include<stack>
#define HASHTABLESIZE 50
using namespace std;
bool AND(bool a,bool b){
  return (a&b);
}
bool OR(bool a,bool b){
  return (a|b);
}
bool NOT(bool a){
  return (!a);
}
bool IMPLIES(bool a,bool b){
  return (!a|b);
}
bool BICOND(bool a,bool b){
  return(a==b?1:0);
}

bool isoperator(char x){ // checks whether given char is an operator or not
    return((x=='=' || x=='>' || x=='v' || x=='&' || x=='V' || x=='^'));
}
bool isunaryoperator(char x){ // checks whether given char is an operator or not
    return((x=='~' || x=='-'));
}
bool isletter(char x){ // any small or capital letter except v or V
    return(((65<=x && x<=90) || (97<=x && x<=122)) && (x!='v' && x!='V'));
}
int prec(char x){ // order of precedence "~" > "&" > "v" > ">" > "=" > "("
    if(x=='(') return 0;
    else if(x=='=') return 1;
    else if(x=='>') return 2;
    else if(x=='v' || x=='V' || x=='+') return 3;
    else if(x=='&' || x=='^' || x=='*') return 4;
    else if(x=='~' || x=='-') return 5;
    else return -1;
}

char* infix;
char* postfix;int posttop = -1;

bool hashtable[HASHTABLESIZE]={0};
int hashmap(char x){
    return x-97;
}
char invhashmap(int n){
    return n+97;
}

int intopos(){
  int i;
  int number_of_variables=0;
  stack<char> stack;
  for(i=0;infix[i];i++){
    if(isletter(infix[i])){
      postfix[++posttop]=infix[i];
      if(!hashtable[hashmap(infix[i])]){
        hashtable[hashmap(infix[i])]=1;
        number_of_variables++;
      }
      else if(isoperator(infix[i]) || isunaryoperator(infix[i])){
        stack.push(infix[i]);
      }
    }
    
  }
  return number_of_variables;
}

int main(){
  bool a = 1;
  bool b = 0;
  printf("%d\n",!a);
  return 0;
}
