/*
	栈测试stack
*/

#include <stdio.h>
#include "02stack.h"

int main()
{
	stack stk = {0};
	stack_init(&stk);
	printf("是否为满:%d\n",stack_full(&stk));
	printf("是否为空:%d\n",stack_empty(&stk));
	printf("数字个数:%d\n",stack_size(&stk));

	stack_push(&stk,4);
	stack_push(&stk,11);
	stack_push(&stk,23);
	stack_push(&stk,31);
	stack_push(&stk,46);
	stack_push(&stk,5);

	printf("是否为满:%d\n",stack_full(&stk));
	printf("是否为空:%d\n",stack_empty(&stk));
	printf("数字个数:%d\n",stack_size(&stk));

	printf("最后一个数字为:%d \n",stack_pop(&stk));
	printf("最后一个数字为:%d \n",stack_pop(&stk));
	printf("最后一个数字为:%d \n",stack_pop(&stk));
	printf("最后一个数字为:%d \n",stack_pop(&stk));
	printf("最后一个数字为:%d \n",stack_pop(&stk));
	printf("最后一个数字为:%d \n",stack_pop(&stk));

	printf("是否为满:%d\n",stack_full(&stk));
	printf("是否为空:%d\n",stack_empty(&stk));
	printf("数字个数:%d\n",stack_size(&stk));

	stack_deinit(&stk);
	return 0;
}
