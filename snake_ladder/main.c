/*
21:00 25 Jan 2024
Snake and Ladders Game modelled after the board given in the directory.
An array stores the location of each player.
Die roll performed by using srand and rand()
Snake, Ladder and Win conditions are handled by a method.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
short* depr(short* x){
  switch (*x) {
    case 5: *x=46;break;//ladder
    case 11: *x=66;break;// ladder
    case 19: *x= 43;break;// ladder
    case 24: *x=94;break;// ladder
    case 31: *x=73;break;// ladder
    case 34: *x=7;break;// snake
    case 47: *x=4;break;// snake
    case 58: *x=82;break;// ladder
    case 65: *x=3;break;// snake
    case 87: *x=32;break;//snake 
    case 92: *x=92;break;// snake
    case 97: *x=58;break;// snake
    case 99: *x=40;break;// snake
    //case 100: return x;
  }
  if(*x>=100) return x;
  return NULL;
}
int genrand(){
  return(rand()%6+1);
}
int main(){
  srand(time(NULL));
  int i, roll=0;
  short num_players;
  printf("Select Number of Players ");
  scanf("%hi",&num_players);
  short* X = (short*)malloc(num_players*(sizeof(short)));
  for(i=0;i<num_players;i++) X[i]=1;
  i=0;
  while(1){
    fflush(stdin);
    printf("{");
    for(int k=0;k<num_players;k++){
      printf("%d,",*(X+k));
    }
    printf("\b}\n");
    printf("chance of %d\nPRESS ENTER TO ROLL DICE",i+1);
    getchar();
    roll = genrand();
    printf("%d rolled number %d\n",i+1,roll);
    *(X+i) += roll;
    if(depr(X+i)!=NULL){
      printf("PLAYER %d WINS",i+1);
      return 0;
    }
    i = (i+1)%num_players;
  }
  return 1;  
}
