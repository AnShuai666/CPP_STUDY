/*
	链表演示
*/
#include <stdlib.h>
#include <stdio.h>
#include "01link.h"
//链表的初始化函数
void link_init(link *p_link)
{
	p_link->head.p_next = &(p_link->tail);
	p_link->tail.p_next = NULL;
}

//链表的清理函数
void link_deinit(link *p_link)
{
	while(p_link->head.p_next != &(p_link->tail))
	{
		node *p_first = &(p_link->head);
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		//p_mid指针一定和第一个有效节点捆绑
		p_first->p_next = p_last;
		free(p_mid);
		p_mid = NULL;
	}
}

//统计有效节点个数
int link_size(const link* p_link)
{
	int cnt = 0;
	const node *p_node = NULL;
	for(p_node = &(p_link->head); p_node != &(p_link->tail); p_node = p_node->p_next)
	{
		const node *p_first = p_node;
		const node *p_mid = p_first->p_next;
		const node *p_last = p_mid->p_next;
		if(p_mid != &(p_link->tail))
		{
			cnt++;
		}
	}
	return cnt;
}

//把新数字插在最前面函数方法
void link_add_head(link *p_link, int num)
{
	node *p_first = &(p_link->head);
	node *p_mid = p_first->p_next;
	node *p_last = p_last->p_next;

	node *p_node = (node *)malloc(sizeof(node));
	if(!p_node)
	{
		printf("动态内存分配失败\n");
		return;
	}
	
	p_node->num = num;
	p_node->p_next =NULL;
	p_first->p_next = p_node;
	p_node->p_next = p_mid;
}

//把新数字插入到最后的位置
void link_append(link* p_link, int num)
{
	node *p_node = (node *)malloc(sizeof(node));
	node *p_tmp = NULL;
	if(!p_node)
	{
		printf("动态内存分配失败\n");
		return;
	}
	p_node->num = num;
	p_node->p_next = NULL; 
	
	for(p_tmp = &(p_link->head); p_tmp != &(p_link->tail); p_tmp = p_tmp->p_next)
	{
		node *p_first = p_tmp;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid == &(p_link->tail))
		{
			p_first->p_next =p_node;
			p_node->p_next = p_mid;
			break;
		}
	}
	
}

//按顺序把数字加入链表插入函数
void link_insert(link* p_link, int num)
{
	node *p_node = (node *)malloc(sizeof(node));
	if(!p_node)
	{
		printf("动态内存分配失败\n");
		return;
	}
	p_node->num = num;
	p_node->p_next = NULL;
	node *p_tmp = NULL;
	for(p_tmp = &(p_link->head); p_tmp != &(p_link->tail); p_tmp = p_tmp->p_next)
	{
		node *p_first = p_tmp;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid == &(p_link->tail) || p_mid->num > num)
		{
			p_first->p_next = p_node;
			p_node->p_next = p_mid;
			break;
		}
		
	}


	
}

//删除第一个数字的函数
void link_remove_head(link *p_link)
{
	if(&(p_link->head) == &(p_link->tail))
	{
		return;
	}

	node *p_first = &(p_link->head);
	node *p_mid = p_first->p_next;
	node *p_last = p_mid->p_next;

	p_first->p_next = p_last;
	free(p_mid);
	p_mid = NULL;
}

//删除最后一个数字的代码
void link_remove_tail(link *p_link)
{
	node *p_node = NULL;
	for(p_node = &(p_link->head); p_node != &(p_link->tail); p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_last == &(p_link->tail))
		{
			p_first->p_next = p_last;
			free(p_mid);
			p_mid =	NULL;
			break;
		}
	}
}


void link_remove(link *p_link, int num)
{
	node *p_node = NULL;
	for(p_node = &(p_link->head); p_node != &(p_link->tail); p_node = p_node->p_next)
	{
		node *p_first = p_node;
		node *p_mid = p_first->p_next;
		node *p_last = p_mid->p_next;
		if(p_mid != &(p_link->tail) && p_mid->num == num)
		{
			p_first->p_next = p_last;
			free(p_mid);
			p_mid = NULL;
			break;
		}
	}
}


//获得第一个数字的函数
int link_get_head(const link *p_link, int *p_num)
{
	if(p_link->head.p_next == &(p_link->tail))
	{
		return 0;
	}
	else
	{
		*p_num = p_link->head.p_next->num;
		return 1;
	}
}

//获得最后一个数字的函数
int link_get_tail(const link* p_link, int *p_num)
{
	const node *p_node = NULL;
	for(p_node = &(p_link->head); p_node != &(p_link->tail); p_node = p_node->p_next)
	{
		const node *p_first = p_node;
		const node *p_mid = p_first->p_next;
		const node *p_last = p_mid->p_next;
		
		if(p_last == &(p_link->tail))
		{
			*p_num = p_mid->num;
			return 1;
		}
	}
	return 0;
}


//根据编号找到数字
int link_get(const link *p_link, int sn, int *p_num)
{
	int cnt = 0;
	const node *p_node = NULL;
	for(p_node = &(p_link->head); p_node != &(p_link->tail); p_node = p_node->p_next)
	{
		const node *p_first = p_node;
		const node *p_mid = p_first->p_next;
		const node *p_last = p_mid->p_next;
		if(p_mid != &(p_link->tail))
		{
			if(cnt == sn)
			{
				
				*p_num = p_mid->num;
				return 1;	
			}
			cnt++;
		}
	}
	return 0;
}





















