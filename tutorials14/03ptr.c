/*
	二级指针演示
*/

#include <stdio.h>

int main()
{
	int num = 0;
	int *p_num = &num;
	int **pp_num = &p_num;
	**pp_num = 10;
	printf("num的值为：%d\n",num);
	
	*pp_num = NULL;
	printf("p_num的值：%p\n",p_num);
	return 0;
}
