#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//������д��
void invert(char *start , char *end)
{
	char tmp;
	while (start<end)
	{
		tmp=*start;
		*start=*end;
		*end=tmp;
		start++;
		end--;
	}
}

int main()
{
	char c[100];
	char *ps,*pf;//ps��ͷ��pf����
	while(gets(c)!=NULL)
	{
		puts(c);
		invert(c,c+strlen(c)-1);
		puts(c);
		ps=pf=c;
		while (' '==*ps)
		{
			ps++;
		}
		pf=ps;
		while (' '!=*ps)
		{
			ps++;
		}
		invert(pf,ps-1);
		puts(c);
	}
	system("pause");
}
