#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c;
	int i,j;
	int count[3]={0},tmp;
	char *p[3]={"alp","num","oth"},*pTmp;//指针数组
	while (1)
	{
		memset(count,0,sizeof(count));
		//1.统计
		while ((c=getchar())!=EOF)
		{
			if(c>='a'&&c<='z'||c>='A'&&c<='Z')		count[0]++;
			else if(c>='0'&&c<='9')		count[1]++;
			else	 if(c!='\n')	count[2]++;
		}
		//2.排序
		for (i = 3; i > 1; i--)
			for (j = 0; j < i; j++)
				if(count[j]<count[j+1])
				{
					tmp=count[j];//数据交换
					count[j]=count[j+1];
					count[j+1]=tmp;
					pTmp=p[j];//数组指针交换
					p[j]=p[j+1];
					p[j+1]=pTmp;
				}
		printf("%s=%d,%s=%d,%s=%d\n",p[0],count[0],p[1],count[1],p[2],count[2]);
		//3.打印
		for (i = 0; i <=count[0]; i++)
		{
			if(0==i)		printf("  %d    ",count[0]);
			else		printf("*****  ");
			if(count[0]-count[1]==i)		printf("  %d    ",count[1]);
			else if(i>count[0]-count[1])		printf("*****  ");
			if(count[0]-count[2]==i)		printf("  %d    ",count[2]);
			else if(i>count[0]-count[2])		printf("*****");
			putchar('\n');
		}
		printf(" %s    %s    %s\n",p[0],p[1],p[2]);
	}
	system("pause");
}