#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char c;
	scanf("%d",&i);
	printf("first %d\n",i);
	fflush(stdin);	//��ձ�׼���뻺����
	scanf("%c",&c);
	printf("second %d\n",c);
	system("pause");
}