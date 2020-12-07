#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c;
	char *p[3]={"alp","num","oth"};
	char *pTmp;
	int a[3]={0};
	int i,j,tmp;
	while (1)
	{
		memset(a,0,12);
		while ((c=getchar())!=EOF)
		{
			if (c>='a'&&c<='z'||c>='A'&&c<='Z')
			{
				a[0]++;
			}else if(c>='0'&&c<='9')
			{
				a[1]++;
			}else if(c!='\n')
			{
				a[2]++;
			}
		}
		printf("alp=%d\tnum=%d\toth=%d\n",a[0],a[1],a[2]);
		for (i = 3; i > 1; i--)
		{
			for (j = 0; j <i-1 ; j++)
			{
				if (a[j]<a[j+1])
				{
					tmp=a[j];	//交换数
					a[j]=a[j+1];
					a[j+1]=tmp;
					pTmp=p[j];	//交换指针数组
					p[j]=p[j+1];
					p[j+1]=pTmp;
				}
			}
		}
		printf("%s=%d\t%s=%d\t%s=%d\n",p[0],a[0],p[1],a[1],p[2],a[2]);
		//打印柱体
		for (i = 0; i <= a[0]; i++)
		{
			if (0==i)
			{
				printf("  %d    ",a[0]);
			}else
			{
				printf("*****");
			}
			if (a[0]-a[1]==i)
			{
				printf("  %d     ",a[1]);
			}else if (i>a[0]-a[1])
			{
				printf("  *****");
			}
			if (a[0]-a[2]==i)
			{
				printf("  %d     ",a[2]);
			}else if (i>a[0]-a[2])
			{
				printf("  *****");
			}
			putchar('\n');
		}
		printf(" %s    %s    %s  \n",p[0],p[1],p[2]);
	}
	system("pause");
}