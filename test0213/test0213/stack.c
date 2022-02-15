#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 

//��ʼ��
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}
//��ջ
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//�жϿռ��Ƿ��㹻
	//�ռ䲻��
	if (ps->top == ps->capacity)
	{
		int newCapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newCapacity);
		//����ʧ��
		if (tmp == NULL)
		{
			printf("realloc fail!");
			exit(0);
		}
		//���ٳɹ�
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
//ȡջ��Ԫ��
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//ջ�Ĵ�С
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;//ע���Ǵ�0��ʼ��
}
//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
//ջ������
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