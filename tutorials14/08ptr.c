/*
	函数指针演示
*/

#include <stdio.h>

void print(int arr[], int size)
{
	for(int num = 0; num < size; num ++)
	{
		printf("%d ",*(arr+num));
	}

}

void print_cb(int *p_num)
{
	printf("%d ",*p_num);
}

void for_each(int *p_num, int size, void (*p_func)(int *))
{
	int num = 0;
	for (num = 0; num < size; num++)
	{
		p_func(p_num + num);
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	print(arr,5);
	printf("\n");
	for_each(arr, 5, print_cb);
	printf("\n");
	return 0;
}
