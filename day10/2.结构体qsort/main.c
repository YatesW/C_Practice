#include"head.h"
int main()
{
	stu_t stuArr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d %s %f %f %f",&stuArr[i].num,stuArr[i].name,
		&stuArr[i].Chinese,&stuArr[i].Math,&stuArr[i].English);
	}
	printf("---------------------------\n");
	print(stuArr);
	qsort(stuArr,5,sizeof(stu_t),numCompare);
	printf("------------num-------------\n");
	print(stuArr);
	qsort(stuArr,5,sizeof(stu_t),scoreCompare);
	printf("-----------score-------------\n");
	print(stuArr);
	qsort(stuArr,5,sizeof(stu_t),mathCompare);
	printf("-----------math-------------\n");
	print(stuArr);
	system("pause");
}

int numCompare(const void *op1,const void *op2)
{
	pstu_t p1=(pstu_t)op1;
	pstu_t p2=(pstu_t)op2;
	return p1->num-p2->num;
}
int scoreCompare(const void *op1,const void *op2)
{
	pstu_t p1=(pstu_t)op1;
	pstu_t p2=(pstu_t)op2;
	if (p1->Chinese+p1->Math+p1->English > p2->Chinese+p2->Math+p2->English)
	{
		return 1;
	}else if (p1->Chinese+p1->Math+p1->English < p2->Chinese+p2->Math+p2->English)
	{
		return -1;
	}else return 0;
}
int mathCompare(const void *op1,const void *op2)
{
	pstu_t p1=(pstu_t)op1;
	pstu_t p2=(pstu_t)op2;
	return p1->Math-p2->Math;
}
void print(stu_t *arr)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("num=%d ,name=%s ,Chines=%5.2f ,Math=%5.2f ,English=%5.2f ,total=%5.2f\n",
		arr[i].num,arr[i].name,arr[i].Chinese,arr[i].Math,arr[i].English,arr[i].Chinese+arr[i].Math+arr[i].English);
	}
}