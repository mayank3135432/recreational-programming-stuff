#include<stdio.h>
void main() {
	int A[2][3] = { {1,2,3},
		            {4,5,6} };
	int B[3][2] = { {1,2},
		            {3,4},
		            {5,6} };
	int C[2][2];
	int i, j,num=3, k;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			C[i][j] = 0;
			for (k = 0; k < num; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
		}
	}
	/*now print the product matrix C */
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", C[i][j]);
		}
		printf("\n\n");
	}
}