#include <stdio.h>

#define BIT_IN_BYTE 8
#define BIT_INT (sizeof(int) * BIT_IN_BYTE)

void print_bits(unsigned int num)
{
	int i;
	int break_for_byte = 0;
	printf("BIT of %d\n", num);
	for(i = 0; i < BIT_INT; i++)
	{
		printf("%d", (num & (1 << i))?1:0);
		if(break_for_byte  == 7)
		{
			printf("\n");
			break_for_byte = 0;
		} else
			break_for_byte++;
	}
	printf("\n\n");
}

unsigned int rev_bit(unsigned num)
{
	int i = 0;
	unsigned int temp = 0;

	for(i = 0; i < BIT_INT; i++)
		(num & (1 << i))? temp |= (1 << (BIT_INT - i - 1)): 0;	
	return temp;
}

int main()
{
	print_bits(10);
	print_bits(rev_bit(10));
	return 0;
}

