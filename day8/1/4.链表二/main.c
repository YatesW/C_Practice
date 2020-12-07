#include "list.h"
int main()
{
	pnode_t phead=NULL;
	pnode_t ptail=NULL;
	int num;
	char name[20];
	float score;
	while ((scanf("%d %s %f",&num,name,&score))!=EOF)
	{
		headInsert(&phead,&ptail,num,name,score);
	}
	printList(phead);
	/*while ((scanf("%d",&num))!=EOF)
	{
		findList(phead,num);
	}*/
	/*while ((scanf("%d %f",&num,&score))!=EOF)
	{
		modifyList(phead,num,score);
	}*/
	while((scanf("%d",&num))!=EOF)
	{
		deleteList(&phead,&ptail,num);
		printList(phead);
	}
	_CrtDumpMemoryLeaks();
	system("pause");
}
void printList(pnode_t phead)
{
	pnode_t pcur=phead;
	while (pcur)
	{
		printf("%d %s %5.1f\n",pcur->num,
			   pcur->name,pcur->score);
		pcur=pcur->pnext;
	}

}
void headInsert(pnode_t *pphead,pnode_t *pptail,int num,char *name,float score)
{
	pnode_t pcur=(pnode_t)malloc(sizeof(node_t));
	memset(pcur,0,sizeof(node_t));
	pcur->num=num;
	strcpy(pcur->name,name);
	pcur->score=score;
	if (NULL==*pphead)
	{
		*pphead=*pptail=pcur;
	}
	else
	{
		pcur->pnext=*pphead;
		*pphead=pcur;
	}
}
void findList(pnode_t phead ,int num)
{
	pnode_t pcur;
	pcur=phead;
	while (pcur)
	{
		if (pcur->num==num)
		{
			printf("num:%d	name:%s	score:%5.2f\n",pcur->num,pcur->name,pcur->score);
			break;
		}
		pcur=pcur->pnext;
	}
	if (!pcur)
	{
		printf("ERROR!\n");
	}
}
void modifyList(pnode_t phead,int num,float score)
{
	pnode_t pcur;
	pcur=phead;
	while (pcur)
	{
		if (pcur->num==num)
		{
			printf("num:%d	name:%s	score:%5.2f\n",pcur->num,pcur->name,pcur->score);
			pcur->score=score;
			printf("after :\nnum:%d	name:%s	score:%5.2f\n",pcur->num,pcur->name,pcur->score);
			break;
		}
		pcur=pcur->pnext;
	}
	if (!pcur)
	{
		printf("ERROR!\n");
	}
}
void deleteList(pnode_t *pphead, pnode_t *pptail, int num)
{
	pnode_t pcur = *pphead;
	pnode_t ppre = pcur;
	while (pcur)
	{
		if (pcur->num == num)
		{
			break;
		}
		ppre = pcur;
		pcur = pcur->pnext;
	}

	if (pcur == NULL)
	{
		printf("error! Number is not found!\n");
		return;
	}

	if (pcur == *pphead)//Ó°ÏìÍ·Ö¸Õë
	{
		if (*pphead == *pptail)
		{
			*pptail = NULL;
		}
		*pphead = (*pphead)->pnext;
		free(pcur);
		pcur = NULL;
	}
	else {
		if (pcur == *pptail)
		{
			*pptail = ppre;
		}
		ppre->pnext = pcur->pnext;
		free(pcur);
		pcur = NULL;
	}
}