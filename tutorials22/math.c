/*
	函数指针数组
*/
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int process(int (*p_func)(int, int), int a, int b);
int main()
{
	int (*p_func)(int,int);
	int (*p[4])(int,int) = {add,sub,mul,div};
	int a = 6;
	int b = 2;
	p_func = add;
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

int process(int (*p_func)(int, int), int a, int b)
{
	return p_func(a,b);
}
