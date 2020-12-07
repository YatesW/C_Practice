#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char name[40];
	printf("Enter your name: ");
	gets(name);
	strcat(name," the Great");
	printf("Hello , %s\n",name);
	/*char c[20];
	char d[20];
	int ret;
	while(gets(c)!=NULL)
	{
		printf("The length is %d\n",strlen(c));
		strcpy(d,"handsome");
		ret=strcmp(d,"Hello");
		printf("The result is %d\n",ret);
	}*/
	system("pause");
}