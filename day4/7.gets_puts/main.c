#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c[20];
	int ret;
	while(fgets(c,20,stdin)!=NULL)	//fgets���ȡ\n�����������
	{
		fputs(c,stdout);
	}
	/*gets(c);
	{
		puts(c);
	}
	ret=puts(c);*/
	system("pause");
}