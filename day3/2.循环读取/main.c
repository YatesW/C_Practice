#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	int ret;
	while(fflush(stdin),(ret=scanf("%d%d",&i,&j))!=EOF)
	{
		printf("ret=%d\ti=%d\tj=%d\n",ret,i,j);
	}
	system("pause");
}