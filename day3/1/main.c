#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char c;
	scanf("%d",&i);
	printf("first %d\n",i);
	fflush(stdin);	//清空标准输入缓冲区
	scanf("%c",&c);
	printf("second %d\n",c);
	system("pause");
}