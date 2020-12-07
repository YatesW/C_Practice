#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(char c[])
{
	int i;
	for(i=0;c[i]!=0;++i)
	{
		putchar(c[i]);
	}
	putchar('\n');
}
int main()
{
	char a[10];
	char b[10];
	scanf("%s%s",a,b);
	printf("%s--%s\n",a,b);
	print(a);
	system("pause");
}