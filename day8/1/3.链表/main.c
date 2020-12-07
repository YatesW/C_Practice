#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int elem_t;
typedef struct node{
	elem_t data;
	struct node *pnext;
}node_t,*pnode_t;
void headInsert(pnode_t *pphead ,pnode_t *pptail ,elem_t data);
void tailInsert(pnode_t *pphead ,pnode_t *pptail ,elem_t data);
void sortInsert(pnode_t *pphead ,pnode_t *pptail ,elem_t data);
int main()
{
	pnode_t phead=NULL;
	pnode_t ptail=NULL;
	elem_t data;
	while ((scanf("%d",&data)!=EOF))
	{
		//headInsert(&phead,&ptail,data);
		//tailInsert(&phead,&ptail,data);
		sortInsert(&phead,&ptail,data);
	}
	system("pause");
}
void headInsert(pnode_t *pphead ,pnode_t *pptail ,elem_t data)
{
	pnode_t pcur=(pnode_t)malloc(sizeof(node_t));//pcur是当前要插入的新节点
	memset(pcur,0,sizeof(node_t));
	pcur->data=data;
	if (NULL==*pphead)
	{
		*pphead=*pptail=pcur;
	}
	else{
	pcur->pnext = *pphead;
	*pphead=pcur;
	}
}
void tailInsert(pnode_t *pphead ,pnode_t *pptail ,elem_t data)
{
	pnode_t pcur=(pnode_t)malloc(sizeof(node_t));//pcur是当前要插入的新节点
	memset(pcur,0,sizeof(node_t));
	pcur->data=data;
	if (NULL==*pphead)
	{
		*pphead=*pptail=pcur;
	}
	else{
	(*pptail)->pnext = pcur;
	*pptail=pcur;
	}
}
void sortInsert(pnode_t *pphead ,pnode_t *pptail ,elem_t data)//四种情况
{
	pnode_t pcur=(pnode_t)malloc(sizeof(node_t));//pcur是当前要插入的新节点
	memset(pcur,0,sizeof(node_t));
	pcur->data=data;
	if (NULL==*pphead)
	{
		*pphead=*pptail=pcur;
	}
	else if(pcur->data<(*pphead)->data)
	{
		pcur->pnext =*pphead;
		*pphead=pcur;
	}
	else if(pcur->data>(*pptail)->data)
	{
		(*pptail)->pnext =pcur;
		*pptail =pcur;
	}
	else
	{
		pnode_t ppre=*pphead;
		pnode_t prear=ppre->pnext ;
		while (1)
		{
			if (pcur->data >ppre->data &&pcur->data <prear->data)
			{
				
				ppre->pnext =pcur;
				pcur->pnext=prear;
				break;
			}
			ppre=ppre->pnext;
			prear=prear->pnext;
		}
	}
}