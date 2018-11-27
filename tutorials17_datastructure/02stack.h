/*
	栈练习
*/
#ifndef __02STACK_H__
#define __02STACK_H__

typedef struct 
{
	int buf[SIZE];
	int num;
} stack;

void stack_init(stack *);

//栈的清理函数

void stack_deinit(stack *);

//判断满的函数
int stack_full(const stack *);

//判断空的函数
int stack_empty(const stack *);

int stack_size(const stack* );

//压栈
void stack_push(stack *, int );

int stack_pop(stack *);

int stack_top(stack *);

#endif //__02STACK_H__
