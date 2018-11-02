#include <stdio.h>
#include "10add.h"
int main()
{
	int num1, num2, sum=0;
	printf("请输入两个数字：\n");
	scanf("%d%d",&num1,&num2);
	sum = add(num1,num2);
	printf("两个数字之和为：%d\n",sum);
	return 0;
}
