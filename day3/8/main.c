#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[]={11,9,9,5,11},i;
	int total=0;
	for(i=0;i<5;i++)
	{
		total=total^a[i];
	}
	printf("%d\n",total);
	system("pause");
}   