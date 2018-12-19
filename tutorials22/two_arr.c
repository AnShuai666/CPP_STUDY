/*
	指针复习
*/

#include <stdio.h>

int main()
{
	int arr[2][3] = {{1,2,3},{4,5,6}};
	printf("arr[0][1]=%d\n",*(*arr+1));
	printf("arr[1][1]=%d\n",*(*(arr+1)+1));
	printf("arr[1][1]=%d\n",*(*(arr+2)-2));
	return 0;
}
