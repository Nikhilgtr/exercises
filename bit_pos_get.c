#include <stdio.h>

int bit_pos_get(int num)
{
	int maj = 0;
	maj = (((num / 10) % 10)-2);
	if(maj == 0)
		return maj + ((num % 10) -1);
	else
		return 4 + ((num % 10) -1);

}


int main()
{
	int num = 121;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 122;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 123;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 124;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 131;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 132;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 133;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	num = 134;
	printf("num is %d and index = %d\n", num, bit_pos_get(num));	
	return 0;
}
