#include <stdio.h>

/*
   00 01 02
   10 11 12
   20 21 22

*/
int main()
{
	int arr[3][3] = {{1,2,3},
					{4,5,6},
					{7,8,9}};
	int i,j;
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);

	int sum_mi = 0;
	int sum_ma = 0;

	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			if(i == j)
			sum_ma += arr[i][j];
		}
		sum_mi += arr[i][col-i-1];	
	}

	printf("sum_ma = %d\n", sum_ma);
	printf("sum_mi = %d\n", sum_mi);

}
