#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(int (*p)[4] , int row)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-4d",*(*(p+i)+j));
		}
		putchar('\n');
	}
}
int main()
{
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int b[4]={1,2,3,4};
	int (*p)[4];//Êý×éÖ¸Õë
	int *pArr;
	pArr=b;
	p=a;
	print(a,3);
	system("pause");
}
