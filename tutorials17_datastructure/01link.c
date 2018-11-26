/*
		动态分配节点演示
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int num;
	struct node *p_next;
} node;

int main()
{	
	int num = 0;
	node head = {0};
	node tail = {0};
	head.p_next = &tail;
	node *p_node = NULL;
	node *p_tmp = NULL;
	while(1)
	{
		
		printf("请输入数字:\n");
		scanf("%d",&num);
			if(num<0)break;
		p_node = (node *)malloc(sizeof(node));
		if(!p_node)
			continue;
		p_node->num = num;
		p_node->p_next = NULL;
			
		for(p_tmp = &head;p_tmp != &tail; p_tmp = p_tmp->p_next)
		{
			node *p_first = p_tmp;
			node *p_mid = p_first->p_next;
			node *p_last = p_mid->p_next;
			if(p_mid == &tail || p_mid->num > num)
			{
				p_first->p_next = p_node;
				p_node->p_next = p_mid;
				break;
			}
		}
	}

	//删除节点
	printf("请输入要输入删除的数:\n");
	scanf("%d",&num);
	for(p_tmp = &head; p_tmp != &tail; p_tmp = p_tmp->p_next)
	{
		node *p_first = p_tmp;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid != &tail && p_mid->num == num)
		{
			p_first->p_next = p_last;
			free(p_mid);
			p_mid = NULL;
			break;
		}
	}

	for(p_tmp = &head; p_tmp != &tail; p_tmp = p_tmp->p_next)
	{
		node *p_first = p_tmp;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid != &tail)
		{
			printf("%d ", p_mid->num);
		}
	}
	printf("\n");
	while(head.p_next != &tail)
	{
		node *p_first = &head;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		p_first->p_next = p_last;
		free(p_mid);
		p_mid = NULL;
	}
	return 0;
}
