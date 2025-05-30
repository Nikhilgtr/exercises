#include <stdio.h>

//0001 0001
//0000 0001

int get_bits_to_be_flipped(unsigned int a, unsigned int b)
{
	int i;
	int count_a = 0;
	int count_b = 0;
	for(i = 0; i < sizeof(a) * 8; i++)
	{
		if(a & 1<<i && b & 1<<i)
			continue;
		count_b++;
	}
	return count_b - count_a;
}

int main()
{
	printf("%d\n", get_bits_to_be_flipped(18,5));
}
