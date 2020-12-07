#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{9,11,13,15}};
	int i,j;
	for(i=0;i<3;++i)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-4d",a[i][j]);
		}
		putchar('\n');
	}
	system("pause");
} 