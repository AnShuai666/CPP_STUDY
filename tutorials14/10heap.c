/*
	动态分配内存演示
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *create(int size)
{
	int i = 0;
	int *p_num = NULL;
	p_num = (int *)malloc(sizeof(int)*size);
	if(!p_num)
	{
		exit(0);
	}
	for(i = 0; i < size; i++)
	{
		*(p_num + i) = rand()%36 +1;
	}
}

int main()
{
	srand(time(0));
	int *p_num = NULL;
	p_num = create(5);
	
	if(!p_num)
	{
		printf("内存分配失败");
		return 1;
	}
	for(int i = 0; i<5; i++)
	{
		printf("%d ",*(p_num+i));
	}
	printf("\n");
	free(p_num);
	p_num = NULL;
	return 0;

}
