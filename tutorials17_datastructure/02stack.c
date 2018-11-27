/*
	栈练习
*/

#include "02stack.h"

void stack_init(stack *p_stack)
{
	p_stack->num = 0;
}

//栈的清理函数

void stack_deinit(stack *p_stack)
{
	p_stack->num = 0;
}

//判断满的函数
int stack_full(const stack *p_stack)
{
	return p_stack->num >= SIZE;
}

//判断空的函数
int stack_empty(const stack *p_stack)
{
	return !(p_stack->num);
}

int stack_size(const stack* p_stack)
{
	return p_stack->num;
}

//压栈
void stack_push(stack *p_stack, int number)
{
	p_stack->buf[p_stack->num] = number;
	p_stack->num++;
}

int stack_pop(stack *p_stack)
{
	int ret = p_stack->buf[p_stack->num-1];
	p_stack->num--;
	return ret;
}

int stack_top(stack *p_stack)
{
	return p_stack->buf[p_stack->num-1];
}
