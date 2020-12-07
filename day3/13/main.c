#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year,mon,day,i,total;
	int a[]={31,28,31,40,31,30,31,31,30,31,30,31};
	while(scanf("%d %d %d",&year,&mon,&day)!=EOF)
	{
		total=0;
		for(i=0;i<mon-1;++i)
		{
			total+=a[i];
		}
		total+=day;
		if(mon>2)
		{
			total+=(year%4==0&&year%100!=0||year%400==0);
		}
	printf("%4d-%02d-%02d is the %2d day of the year\n",year,mon,day,total);
	}
	system("pause");
}   