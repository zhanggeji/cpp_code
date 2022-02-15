#pragma once
#include <stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
//初始化
void StackInit(ST* ps);
//入栈
void StackPush(ST* ps, STDataType x);
//出栈
void StackPop(ST* ps);
//取栈顶元素
STDataType StackTop(ST* ps);
//栈的大小
int StackSize(ST* ps);
//判断栈是否为空
bool StackEmpty(ST* ps);
//栈的销毁
void StackDestroy(ST* ps);