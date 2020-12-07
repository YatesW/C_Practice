#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5

int main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	int i;
	p=a;
	for(i=0;i<N;++i)
	{
		printf("p[%d]=%d\n",i,*(p+i));
	}
	putchar(10);
	p=a+4;
	printf("*p=%d\n",*p);
	for(i=0;i<N;++i)
	{
		printf("p[%d]=%d\n",i,*(p-i));
	}
	system("pause");
}