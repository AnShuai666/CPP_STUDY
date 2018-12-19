/*
	类型别名
*/

#include <stdio.h>

typedef int arr_t[3];
int main()
{
	arr_t a = {1,2,3};
	arr_t b[2] = {{1,2,3},{4,5,6}};
	int i;
	for(i = 0; i<3; i++)
	{
		printf("%d\n",a[i]);
	}
	printf("%d\n",b[1][0]);
	
	return 0;
}
