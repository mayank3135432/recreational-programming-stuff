#include<stdio.h>
#include<stdlib.h>
void main() {
	/*int len, i;
	scanf("%d", &len);
	int* p;
	p = (int*)malloc(len*sizeof(int));
	for (i = 0; i < len; i++)
		scanf("%d", &p[i]);*/
	int** arr, m;
	int i, n, j;
	scanf("%d%d", &m, &n);
	arr = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; ++i) {
		*(arr + i) = (int*)malloc(n * sizeof(int));
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			/*
			arr[i][j] is the same thing as *((*arr+i)+j)
			so
			&arr[i][j] will be (*arr+i)+j
			*/
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}