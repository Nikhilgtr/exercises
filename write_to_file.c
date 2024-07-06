#include <stdio.h>
#include <string.h>


int main()
{
	FILE *fp;
    char *ch = "Hello I am Nikhil Gautam";
	fp = fopen("./test_file.txt","w+");
//	fprintf(fp,"Hello This is Test file\n");
    fwrite(ch,sizeof(char),strlen(ch) ,fp);

    fclose(fp);
	return 0;
}
