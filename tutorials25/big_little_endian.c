#include <stdio.h>

int main()
{
	short var_s = 0x0001;
	char *p = (char *)&var_s;
	if(*p == 0)
		printf("是大端\n");
	else
		printf("是小端\n");
	return 0;
}
