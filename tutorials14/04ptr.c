/*
	二级指针演示
*/
#include <stdio.h>

int main(int argc, char** argv)
{
	for(int i=0; i <= argc-1; i++)
	{
		
		//printf("%s\n",argv[i]);
		printf("%s\n",*(argv+i));
	}
	return 0;
}
