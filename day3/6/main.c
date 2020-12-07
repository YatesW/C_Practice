#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	while(scanf("%d",&i)!=EOF)
	{
		i=i>>1;
		printf("%d\n",i);
	}
	system("pause");
}   