#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//二级指针偏移服务于指针数组（一级指针偏移服务于数组）
void print(char **p,int length)
{
	for (length = 0; length < 5; length++)
	{
		puts(p[length]);
	}
	puts("--------------------------");
}
void printTwoDimension(char (*p)[10],int length)//打印二维数组，利用数组指针
{
	for (length = 0; length < 5; length++)
	{
		puts(p[length]);
	}
}
int main()
{
	char *p[5];//定义了一个指针数组
	char b[5][10]={"lele","lili","lilei","hanmeimei","zhousi"};
	char *pTmp;
	int i,j;
	//char **p2=p;
	char **p2=(char**)malloc(5*sizeof(char*));
	for (i = 0; i < 5; i++)
	{
		p2[i]=b[i];
	}
	 print(p2,5);
	//排序
	for (i = 5; i > 0; i--)
	{
		for (j = 0; j < i-1; j++)
		{
			if (strcmp(p2[j],p2[j+1])>0)
			{
				pTmp=p2[j];
				p2[j]=p2[j+1];
				p2[j+1]=pTmp;
			}
		}
	}
	print(p2,5);
	printTwoDimension(b,5);
	free(p2);
	p2=NULL;
	system("pause");
}