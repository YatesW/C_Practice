#include<stdio.h>
#include<stdlib.h>
//形参的类型是“数组指针”
void print(int b[][4],int row)
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for (j = 0; j < sizeof(b[0])/sizeof(int); j++)
		{
			printf("%4d",b[i][j]);
		}
		putchar('\n');
	}
}

int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{9,11,13,15}};
	print(a,3);
	system("pause");
} 