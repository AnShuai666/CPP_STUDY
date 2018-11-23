/*
	链式物理结构演示
*/

#include <stdio.h>

typedef struct node
{
	int num;
	struct node p_next;
} node;

int main()
{	
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
	//插入
	node2.p_next = node4;
	node4.p_next = node3;
	//删除
	node1.p_next = node4;
	
	return 0;
}
