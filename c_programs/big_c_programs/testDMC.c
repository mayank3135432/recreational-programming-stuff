#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double** make(int rows,int cols){
    
    double** P=(double**)malloc((rows+1)*sizeof(double*));
    int i,j;
    for(i = 0; i <= rows; i++){
        *(P+i)=(double*)malloc((cols+1)*sizeof(double));
    }
    for (i = 0; i <= rows; i++) {
		for (j = 0; j <= cols; j++){
            if(i<rows && j<cols){
                printf("enter element (%d,%d) ",i,j);
			    scanf("%lf", &P[i][j]);
            }
            else
                P[i][j]=NAN;
        }
	}
    return(P);
}

int rowsize(double** P){
    int i=0,j=0,check;
    check=(P[i][j]!=P[i][j])?1:0;
    while(check==0){
        i++;
        check=(P[i][j]!=P[i][j])?1:0;
    }
    int r=i;
    return(r);
}
int colsize(double** P){
    int i=0,j=0,check;
    check=(P[i][j]!=P[i][j])?1:0;
    while(check==0){
        j++;
        check=(P[i][j]!=P[i][j])?1:0;
    }
    int r=j;
    return(r);
}

void output(double** P){
    int rows=rowsize(P);
    int cols=colsize(P);
    int i,j;
    for (i = 0; i < rows; i++) {
        printf("[");
		for (j = 0; j < cols; j++) {
			printf("%lf, ", P[i][j]);
		}
        printf("\b\b]");
		printf("\n");
	}
    printf("\n");
}
void main(){
    double** A;
    A=make(3,3);
    A={{1,2,3,NAN},
       {2,7,-2,NAN},
       {-0.1,3,0,NAN},
       {NAN,NAN,NAN,NAN}};
    output(A);
}