/*
	队列
	一种数据结构
	先进先出
*/

#include "03queue.h"
//队列初始化函数
void queue_init(queue *p_queue)
{
	p_queue->head = 0;
	p_queue->tail = 0;
}

//清理函数
void queue_deinit(queue *p_queue)
{
	p_queue->head = 0;
	p_queue->tail = 0;
}

//判断是否为满
int queue_full(const queue *p_queue)
{
	return p_queue->tail >= SIZE;
}

//判断是否为空
int queue_empty(queue *p_queue)
{
	return p_queue->head == p_queue->tail;
}

//获得数字个数
int queue_size(queue *p_queue)
{
	return p_queue->tail - p_queue->head;
}

//向队列里加入数字
void queue_push(queue *p_queue,int number)
{
	p_queue->buf[p_queue->tail] = number;
	p_queue->tail++;
}

//向队列里获得数字删除数字
int queue_pop(queue *p_queue)
{
	p_queue->head++;
	return p_queue->buf[p_queue->head - 1];
}

//从队列获得数字不删除
int queue_front(const queue *p_queue)
{
	return p_queue->buf[p_queue->head];
}




















