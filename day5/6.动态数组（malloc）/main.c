#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 
int main()
{
	int size;
	char *p;
	scanf("%d",&size);
	p=(char*)malloc(size);
	strcpy(p,"wohenniu!");
	puts(p);
	free(p);//freeʱ������malloc�����ָ��p,��p����ƫ��
	p=NULL;//free�󲻸�NULL��ΪҰָ��
	system("pause");
}