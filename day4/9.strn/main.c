#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c[20];
	char d[20];
	while(gets(c)!=NULL)
	{
		memset(d,0,sizeof(d));//�ռ��ʼ��Ϊ��
		strncpy(d,c,8);
		puts(d);
	//		printf("strncmp res = %d\n",strncmp(c,"howareyou",5));
		printf("strncat res is %s\n",strncat(c," world",6));
	}
	system("pause");
}