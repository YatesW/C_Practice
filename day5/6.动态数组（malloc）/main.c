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
	free(p);//free时必须用malloc申请的指针p,且p不能偏移
	p=NULL;//free后不赋NULL称为野指针
	system("pause");
}