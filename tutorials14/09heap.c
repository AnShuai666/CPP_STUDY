/*
	动态分配内存
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int *p_num = NULL;
	p_num = malloc(sizeof(int)*5);
	if (!p_num)
	{
		return 0;
	}
	// 使用动态分配内存	
	srand(time(0));
	for(int i = 0; i < 5; i++)
	{
		*(p_num + i) = rand()%36 + 1;
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ",*(p_num+i));
	}
	printf("\n");
	free(p_num);
	p_num = NULL;
	return 0;
}

