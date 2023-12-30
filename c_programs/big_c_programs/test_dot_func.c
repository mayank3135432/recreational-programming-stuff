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

double** prod(double** A,double** B){
    int m=rowsize(A);
    int n=colsize(A);
    int p=rowsize(B);
    int q=colsize(B);
    if(n!=p){
        double** C=(double**)malloc(0);
        *C=(double*)malloc(0);
        return(C);
    }
    double** C=(double**)malloc((m+1)*sizeof(double*));
    int i,j,k;
    for(i=0;i<=m;i++)
        *(C+i)=(double*)malloc((q+1)*sizeof(double));
    for(i=0;i<=m;i++){
        for(j=0;j<=q;j++){
            C[i][j]=0;
            if(i<m && j<q){
                for(k=0;k<n;k++)
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            else
                C[i][j]=NAN;
        }
    }
    return(C);
}
int main(){
    double** A;
    double** B;
    double** C;
    A=make(2,2);
    output(A);
    B=make(2,2);
    output(B);
    printf("%d %d\n%d %d\n\n",rowsize(A),colsize(A),rowsize(B),colsize(B));
    C=prod(A,B);
    output(C);
}