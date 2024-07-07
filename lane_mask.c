#include <stdio.h>

unsigned char get_lane_mask(unsigned char lane_number)
{
	return ( (1<<(lane_number*2)) | (1 <<((lane_number*2)+1)));
}

int main()
{
	int i = 0;
	for(i = 0; i < 4; i++)
	{
		printf("Lane mask = %d\n", get_lane_mask(i));	
	}
	return 0;
}
