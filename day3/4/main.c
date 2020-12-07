#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,ret;
	float f;
	char c;
	ret=scanf("%d %c %f",&i,&c,&f);
	printf("%d	%c	%f",i,c,f);
	system("pause");
}  