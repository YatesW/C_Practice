#include"ListStack.h"
int main()
{
	elem_t data;
	stack_t stack;
	stackInit(&stack);
	while (scanf("%d",&data)!=EOF)
	{
		push(&stack,data);
		printStack(&stack);
	}
	while (!isEmpty(&stack))
	{
		data=top(&stack);
		printf("top=%d\n",data);
		pop(&stack);
		printStack(&stack);
	}
	system("pause");
}
void stackInit(pstack_t pstack)
{
	pstack->phead=NULL;
	pstack->size=0;
	memset(pstack,0,sizeof(stack_t));
}
void push(pstack_t pstack,elem_t data)
{
	pstackNode_t pnode=(pstackNode_t)malloc(sizeof(stackNode_t));
	//memset(pstack,0,sizeof(stack_t));	//²»ÄÜ¼Ó!
	pnode->data=data;
	pnode->pnext=pstack->phead;
	pstack->phead=pnode;
	++pstack->size;
}
void pop(pstack_t pstack)
{
	pstackNode_t pcur=pstack->phead;
	if (isEmpty(pstack))
	{
		fprintf(stderr,"ERROR!\n");
	}
	else
	{
		pstack->phead=pcur->pnext;
		free(pcur);
		pcur=NULL;
		--pstack->size;
	}
}
elem_t top(pstack_t pstack)
{
	if (isEmpty(pstack))
	{
		fprintf(stderr,"ERROR!");
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
void printStack(pstack_t pstack)
{
	pstackNode_t pcur=pstack->phead;
	if(isEmpty(pstack))
	{
		fprintf(stderr,"ERROR!  Empty!\n");
	}
	else
	{
		
		while(pcur)
		{
			printf("%d\n",pcur->data);
			pcur=pcur->pnext;
		}
	putchar('\n');
	}
}