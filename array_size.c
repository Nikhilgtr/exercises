#include <stdio.h>

#define ARRAYSIZE(a) (sizeof(a) / sizeof(a[0]))

int main()
{
	int mat[3][3] = {{1,2,3},
					 {4,5,6},
					 {7,8,9}};

	printf("Size of row = %lu and size of col = %lu\n",ARRAYSIZE(mat),ARRAYSIZE(mat[0]));

	return 0;
}
