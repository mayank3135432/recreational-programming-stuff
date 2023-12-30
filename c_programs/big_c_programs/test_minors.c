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
        double** C=(double**)malloc(1);
        *C=(double*)malloc(1);
        C[0][0]=NAN;
        printf("multiplication is not possible\n");
        return(C);
    }
    double** C=(double**)malloc((m+1)*sizeof(double*));
    int i,j,k;
    for(i=0;/*i<m*/i<=m;i++)
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
double** add(double** A,double** B){
    int m=rowsize(A);
    int n=colsize(A);
    int p=rowsize(B);
    int q=colsize(B);
    if(n!=q || m!=p){
        double** C=(double**)malloc(1);
        *C=(double*)malloc(1);
        C[0][0]=NAN;
        printf("addition is not possible\n");
        return(C);
    }
    double** C=(double**)malloc((m+1)*sizeof(double*));
    int i,j;
    for(i=0;/*i<m*/i<=m;i++)
        *(C+i)=(double*)malloc((q+1)*sizeof(double));
    for(i=0;i<=m;i++){
        for(j=0;j<=q;j++){
            if(i<m && j<n){
                C[i][j] = A[i][j]+B[i][j];
            }
            else
                C[i][j]=NAN;
        }
    }
    return(C);
}
double** transpose(double** A){
    int m,n,i,j;
    m=rowsize(A);
    n=colsize(A);
    double** T=(double**)malloc(n*sizeof(double*));
    for(i=0;i<=m;i++){
        *(T+i)=(double*)malloc(m*sizeof(double));
    }
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i<m && j<n)
                T[j][i]=A[i][j];
            else
                T[j][i]=NAN;
        }
    }
    return(T);
}

double** submatrix(double** A,int x,int y){
    int i,j,p,q;
    if(rowsize(A)!=colsize(A)){
        double** C=(double**)malloc(1);
        *C=(double*)malloc(1);
        C[0][0]=NAN;
        printf("matrix is not square\n");
        return(C);
    }
    int n=rowsize(A);
    double** M =(double**)malloc(n*sizeof(double*));
    for(i=0;i<=n;i++){
        *(M+i)=(double*)malloc(n*sizeof(double));
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n-1 || j==n-1)
                M[i][j]=NAN;
        }
    }
    for(i=0,p=0;p<n-1 || i<n;p++,i++){
        for(j=0,q=0;q<n-1 || j<n;q++,j++){
            if(i==x){
                if(j==n-1)
                    p--;
                else
                    continue;
            }
            else if(j==y){
                q--;
            }
            else
                M[p][q]=A[i][j];
        }
    }
    return(M);
}

int main(){
    double** A;
    double** M;
    A=make(2,2);
    output(A);
    printf("now find minor\n");
    M=submatrix(A,1,1);
    printf("now print minor\n");
    output(M);
}


