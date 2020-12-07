#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 9
typedef int elem_t;
typedef struct queue{
	elem_t arr[MAX];
	int front;
	int rear;
	int size;
}queue_t,*pqueue_t;
void queueInit(pqueue_t pqueue);
void enQueue(pqueue_t pqueue, elem_t data);
elem_t deQueue(pqueue_t pqueue);
elem_t getFront(pqueue_t pqueue);
elem_t getRear(pqueue_t pqueue);
int isEmpty(pqueue_t pqueue);
int isFull(pqueue_t pqueue);
int getSize(pqueue_t pqueue);
void printQueue(pqueue_t pqueue);