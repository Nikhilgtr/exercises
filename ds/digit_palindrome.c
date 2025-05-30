#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int num)
{
	int rev = 0;
	int tmp = num;

	while(tmp) {
		int ld = 0;
		ld = tmp % 10;
		rev = rev * 10 + ld;
		tmp = tmp / 10;
	}
	return (rev == num);
}

int main(int argc, char** argv)
{
	printf("Are digits %s palindrome %d\n", argv[1], is_palindrome(atoi(argv[1])));
}
