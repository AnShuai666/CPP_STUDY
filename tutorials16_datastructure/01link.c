/*
	链式物理结构演示
*/

#include <stdio.h>

typedef struct node
{
	int num;
	struct node *p_next;
} node;

int main()
{
	int cnt = 0;	
	node *p_node = NULL;
	node node1 = {1};
	node node2 = {2};
	node node3 = {23};
	node head = {0};
	node tail = {0};
	node node4 = {7};

	head.p_next = &node1;
	node1.p_next = &node2;
	node2.p_next = &node3;
	node3.p_next = &tail;
	
	/*
	//插入
	node2.p_next = node4;
	node4.p_next = node3;
	//删除
	node1.p_next = node4;
	*/
	
	for(p_node = &head; p_node != &tail; p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid == &tail || p_mid->num > node4.num)
		{
			p_first->p_next = &node4;
			node4.p_next = p_mid;
			break;
		}
	}
	
	for(p_node = &head; p_node != &tail; p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid != &tail && p_mid->num == 2)
		{
			p_first->p_next = p_last;
			break;
		}
	}
	
	for(p_node = &head; p_node != &tail; p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid != &tail)
		{
			printf("%d ",p_mid->num);
		}
	}
	printf("\n");
	
	for(p_node = &head; p_node != &tail; p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;

		if(p_mid != &tail)
		{
			cnt++;
		}
	}
	printf("有效数字个数是%d\n",cnt);
	
	cnt = 0;
	for(p_node = &head; p_node != &tail; p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid != &tail)
		{
			if(cnt == 2)
			{
				printf("编号为2的数字是:%d\n",p_mid->num);
				break;
			}
		}
		cnt++;
	}
	return 0;
} 
