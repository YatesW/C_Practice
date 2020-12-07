#include "listStack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	stack_t stack;
	int num;
	stackInit(&stack);
	while (scanf("%d", &num)!= EOF)
	{
		push(&stack,num);
		print(&stack);
	}
	while (!isEmpty(&stack))
	{
		num = top(&stack);
		printf("top = %d\n",num);
		pop(&stack);
		print(&stack);
	}
	pop(&stack);
	system("pause");
}
void stackInit(pstack_t pstack)//³õÊ¼»¯Õ»
{
	pstack->phead=NULL;
	pstack->size=0;
	memset(pstack,0,sizeof(stack_t));
}
void push(pstack_t pstack,int data)
{
	pstackNode_t pnode = (pstackNode_t)calloc(1, sizeof(stackNode_t));
	pnode->data = data;
	pnode->pnext = pstack->phead;
	pstack->phead = pnode;
	++pstack->size;
}
void pop(pstack_t pstack)
{
	if(isEmpty(pstack))
	{
		fprintf(stderr,"error!It's empty.\n");
	}
	else 
	{
			pstackNode_t pcur = pstack->phead;
			pstack->phead = pcur->pnext;
			free(pcur);
			pcur=NULL;
			--pstack->size;
	}
}
int top(pstack_t pstack)
{
	if (isEmpty(pstack))
	{
		fprintf(stderr,"ERROR!\n");
	}
	else
	{
		return pstack->phead->data;
	}
}
int isEmpty(pstack_t pstack)
{
	return !pstack->size;
}
int getSize(pstack_t pstack)
{
	return pstack->size;
}
void print(pstack_t pstack)
{
	pstackNode_t pcur=pstack->phead;
	if (isEmpty(pstack))
	{
		fprintf(stderr,"ERROR!\n");
	}
	else
	{
		while (pcur)
		{
			printf("%3d\n",pcur->data);
			pcur=pcur->pnext;
		}
		putchar('\n');
	}
}