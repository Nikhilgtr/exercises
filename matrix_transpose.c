// C Program to find
// transpose of a matrix
#include <stdio.h>
#define N 4

// This function stores transpose of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B[i][j] = A[j][i];
}

int main()
{
	int A[][] = { {1, 1, 1, 1},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};
	
	int rows = sizeof(A)/sizeof(A[0]);
	int col = sizeof(A[0])/sizeof(A[0][0]);

	printf("Rows = %d and column = %d\n", rows, col);
	int B[N][N], i, j;

	transpose(A, B);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		printf("%d ", B[i][j]);
		printf("\n");
	}

	return 0;
}

