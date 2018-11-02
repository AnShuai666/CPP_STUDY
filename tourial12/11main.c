/*
	多文件编程 条件编译演示
*/

#include <stdio.h>
#include "11read.h"

int main()
{	
	int num=0; 
	num = read();
	printf("输入的数字是%d\n",num);
	return 0;
}
