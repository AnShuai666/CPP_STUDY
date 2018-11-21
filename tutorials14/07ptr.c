/*
	函数指针练习
*/

#include <stdio.h>

int add(int num1, int num2)
{
	return num1+num2;
}

int main()
{
	int (*p_func)(int, int) = NULL;
	p_func = add;
	printf("p_func是%p\n",p_func);
	printf("2+4的结果为%d\n",p_func(2,4));
	return 0;
}
