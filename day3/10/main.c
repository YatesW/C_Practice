#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	int res;
	scanf("%d %d %d",&a,&b,&c);
	printf("The maximum is %d\n",(a>b?a:b)>c?(a>b?a:b):c);
	system("pause");
}   