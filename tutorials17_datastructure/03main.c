/*
	队列测试
*/

#include <stdio.h>
#include "03queue.h"
int main()
{
	queue que = {0};
	queue_init(&que);
	printf("是否为满：%d\n",queue_full(&que));
	printf("是否为空：%d\n",queue_empty(&que));
	printf("数字个数：%d\n",queue_size(&que));
	
	queue_push(&que,4);
	queue_push(&que,11);
	queue_push(&que,23);
	queue_push(&que,31);
	queue_push(&que,42);
	
	
	printf("是否为满：%d\n",queue_full(&que));
	printf("是否为空：%d\n",queue_empty(&que));
	printf("数字个数：%d\n",queue_size(&que));

	printf("最前面数字：%d\n",queue_front(&que));
	
	printf("%d ",queue_pop(&que));
	printf("%d ",queue_pop(&que));
	printf("%d\n ",queue_pop(&que));
		
	printf("是否为满：%d\n",queue_full(&que));
	printf("是否为空：%d\n",queue_empty(&que));
	printf("数字个数：%d\n",queue_size(&que));
	
	
	printf("%d ",queue_pop(&que));
	printf("%d\n ",queue_pop(&que));

	
	printf("是否为满：%d\n",queue_full(&que));
	printf("是否为空：%d\n",queue_empty(&que));
	printf("数字个数：%d\n",queue_size(&que));
	
	queue_deinit(&que);
	return 0;
}
