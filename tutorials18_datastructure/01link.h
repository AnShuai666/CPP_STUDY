/*
	链表演示
*/
#ifndef __01LINK_H__
#define __01LINK_H__

typedef struct node
{
	int num;
	struct node *p_next;
} node;

typedef struct 
{
	node head;
	node tail;
	node *p_cur;//记录上一次获得的数字位置
} link;


//链表的初始化函数
void link_init(link *p_link);

//链表的清理函数
void link_deinit(link *p_link);

//统计有效节点个数
int link_size(const link* p_link);

//把新数字插在最前面函数方法
void link_add_head(link *p_link, int num);

//把新数字插入到最后的位置
void link_append(link* p_link, int num);

//按顺序把数字加入链表插入函数
void link_insert(link* p_link, int num);

//删除第一个数字的函数
void link_remove_head(link *p_link);

//删除最后一个数字的代码
void link_remove_tail(link *p_link);

//删除指定数字
void link_remove(link *p_link, int num);


//获得第一个数字的函数
int link_get_head(const link *p_link, int *p_num);

//获得最后一个数字的函数
int link_get_tail(const link* p_link, int *p_num);

//根据编号找到数字
int link_get(const link *p_link, int sn, int *p_num);

#endif //__01LINK_H__



















