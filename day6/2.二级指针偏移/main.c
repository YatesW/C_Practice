#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//����ָ��ƫ�Ʒ�����ָ�����飨һ��ָ��ƫ�Ʒ��������飩
void print(char **p,int length)
{
	for (length = 0; length < 5; length++)
	{
		puts(p[length]);
	}
	puts("--------------------------");
}
void printTwoDimension(char (*p)[10],int length)//��ӡ��ά���飬��������ָ��
{
	for (length = 0; length < 5; length++)
	{
		puts(p[length]);
	}
}
int main()
{
	char *p[5];//������һ��ָ������
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
	//����
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