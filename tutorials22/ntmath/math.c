/*
	函数指针数组
*/
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

typedef int (*p_funct)(int, int);

int process(p_funct , int a, int b);
int main()
{
	p_funct p[4] = {add,sub,mul,div};
	int a = 6;
	int b = 2;
	p_funct p_func = add;
	printf("%d\n",p_func(a,b));
	printf("%d\n",process(sub,a,b));
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n",process(p[i],a,b));
	}
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int process(p_funct p_func , int a, int b)
{
	return p_func(a,b);
}
