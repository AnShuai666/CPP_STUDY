/*
	数组指针
*/
#include <stdio.h>

int main()
{
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int (*p)[3];
	p = arr;
	printf("arr[0][1]=%d\n",*(*p+1));
	printf("arr[1][1]=%d\n",*(*(p+1)+1));

	return 0;
}
