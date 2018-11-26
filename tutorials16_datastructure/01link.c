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
	
	return 0;
} 
