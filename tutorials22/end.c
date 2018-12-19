/*
	大端小端练习
*/

#include <stdio.h>


int main()
{

	int i =400;

	char *p = &i;
	printf("%p\n",p);
	printf("%d\n",*p);

	printf("\n");
	
	short si = 0x0001;
	char c;
	c = *((char *)&si);
	if(c)
		printf("c = 1 %d 是小端\n",c);
	else
		printf("c = 0 %d 是大端\n",c);
	return 0;
}
