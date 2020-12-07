#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<crtdbg.h>
typedef struct student
{
	int num;
	char name[20];
	float score;
	struct student *pnext;
}node_t,*pnode_t;
void printList(pnode_t phead);
void findList(pnode_t phead,int num);
void modifyList(pnode_t phead,int num,float score);
void headInsert(pnode_t *pphead,pnode_t *pptail,int num,char *name,float score);
void deleteList(pnode_t *pphead,pnode_t *pptail,int num);