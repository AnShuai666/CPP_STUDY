/*
	队列
	一种数据结构
	先进先出
*/
#ifndef __03QUEUE_H__
#define __03QUEUE_H__
typedef struct
{
	int buf[SIZE];
	int head; //最前面下标 空队列head=tail
	int tail; //最后一个有效数字存储区后一个存储区的下标
} queue;

//队列初始化函数
void queue_init(queue *p_queue);

//清理函数
void queue_deinit(queue *p_queue);

//判断是否为满
int queue_full(const queue *p_queue);

//判断是否为空
int queue_empty(queue *p_queue);

//获得数字个数
int queue_size(queue *p_queue);

//向队列里加入数字
void queue_push(queue *p_queue,int number);

//向队列里获得数字删除数字
int queue_pop(queue *p_queue);

//从队列获得数字不删除
int queue_front(const queue *p_queue);

#endif //__03QUEUE__H__


















