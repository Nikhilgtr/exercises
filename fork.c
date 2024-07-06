#include <unistd.h>
#include <stdio.h>

int val = 555;

int main()
{
	int pid_c;
	

	if(pid_c = fork())
	{
		//Parent
		printf("Parent val = %d\n",val);
		pid_c = wait(NULL);
		printf("Child is terminated ID = %d\n",pid_c);
	}
	else 
	{
		/*Child*/
		val  = 10;
		printf("Child val = %d\n",val);
	}
	return 0;
}

