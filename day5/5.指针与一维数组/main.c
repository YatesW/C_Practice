#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 
void change(char *p)
{
	*p-=32;
	p[1]-=32;
	*(p+2)-=32;
}
int main()
{
	char c[10]="hello";
	change(c);
	printf("%s\n",c);
	system("pause");
}