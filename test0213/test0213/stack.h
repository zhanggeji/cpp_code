#pragma once
#include <stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
//��ʼ��
void StackInit(ST* ps);
//��ջ
void StackPush(ST* ps, STDataType x);
//��ջ
void StackPop(ST* ps);
//ȡջ��Ԫ��
STDataType StackTop(ST* ps);
//ջ�Ĵ�С
int StackSize(ST* ps);
//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* ps);
//ջ������
void StackDestroy(ST* ps);