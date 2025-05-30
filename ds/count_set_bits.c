#include <stdio.h>

int BitsSetTable256[256];

// Function to initialise the lookup table
void initialize()
{

	// To initially generate the
	// table algorithmically
	BitsSetTable256[0] = 0;
	for (int i = 0; i < 256; i++)
	{
		BitsSetTable256[i] = (i & 1) +
		BitsSetTable256[i / 2];
	}
}

// Function to return the count
// of set bits in n
int countSetBits(int n)
{
	return (BitsSetTable256[n & 0xff] +
			BitsSetTable256[(n >> 8) & 0xff] +
			BitsSetTable256[(n >> 16) & 0xff] +
			BitsSetTable256[n >> 24]);
}

// Driver code
int main()
{
	// Initialise the lookup table
	initialize();
	int n = 9;
	printf("%d\n", countSetBits(n));
}
