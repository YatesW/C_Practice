#include"seQueue.h"
int main()
{
	queue_t queue;
	elem_t data;
	queueInit(&queue);
	while (scanf("%d",&data)!=EOF)
	{
		enQueue(&queue,data);
		printQueue(&queue);
	}
	while (!isEmpty(&queue))
	{
		data=deQueue(&queue);
		printf("out=%d\n",data);
		printQueue(&queue);
	}
	data = deQueue(&queue);
	printf("out = %d\n", data);
	printQueue(&queue);
	system("pause");
}
void queueInit(pqueue_t pqueue)
{
	memset(pqueue,0,sizeof(queue_t));
}
void enQueue(pqueue_t pqueue,elem_t data)
{
	if (!isFull(pqueue))
	{
		pqueue->arr[pqueue->rear]=data;
		pqueue->rear=(pqueue->rear+1)%MAX;
		++pqueue->size;
	}
	else
	{
		fprintf(stderr,"ERROR!Full\n");
	}
}
elem_t deQueue(pqueue_t pqueue)
{
	if (isEmpty(pqueue))
	{
		fprintf(stderr,"ERROR!Empty\n");
	}
	else
	{
		elem_t ret=pqueue->arr[pqueue->front];
		pqueue->front=(pqueue->front+1)%MAX;
		--pqueue->size;
		return ret;
	}
}
elem_t getSize(pqueue_t pqueue)
{
	return pqueue->size;
}
int isEmpty(pqueue_t pqueue)
{
	if (pqueue->front==pqueue->rear)	return 1;
	else		return 0;
}
int isFull(pqueue_t pqueue)
{
	return pqueue->front==(pqueue->rear+1)%MAX;
}
void printQueue(pqueue_t pqueue)
{
	int i;
	for (i = pqueue->front; i !=pqueue->rear; i=(i+1)%MAX)
	{
		printf("%d\n",pqueue->arr[i]);
	}
	putchar('\n');
}