#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("a=%d\n",a);
	printf("%x--%p\n",p,p);
	printf("*p=%d\n",*p);
	system("pause");
}