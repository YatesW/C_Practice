#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *start , char *end)
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
	char *ps,*pf;
	ps=pf=c;
	while (gets(c)!=NULL)
	{
		puts(c);//ԭʼ����
		reverse(c,c+strlen(c)-1);
		puts(c);//����ת��
		while (' '==*ps)
		{
			ps++;
		}
		pf=ps;
		while (' '!=*ps)
		{
			ps++;
		}
		reverse(pf,ps-1);
		puts(c);
	}
	system("pause");
}