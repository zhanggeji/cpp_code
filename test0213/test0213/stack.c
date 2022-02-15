#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 

//初始化
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}
//入栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//判断空间是否足够
	//空间不足
	if (ps->top == ps->capacity)
	{
		int newCapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newCapacity);
		//开辟失败
		if (tmp == NULL)
		{
			printf("realloc fail!");
			exit(0);
		}
		//开辟成功
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//出栈
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
//取栈顶元素
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//栈的大小
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;//注意是从0开始的
}
//判断栈是否为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
//栈的销毁
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
int main()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 1);
	StackPush(&st, 1);
	StackPush(&st, 1);
	StackPop(&st, 1);
	return 0;
}