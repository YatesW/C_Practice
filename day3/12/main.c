#include <stdio.h>
#include <stdlib.h>
//ʵ�ִ�1�ӵ�100
int main()
{
	int i=1;
	int total=0;
label:
	total+=i;
	++i;
	if(i<=100)
	{
		goto label;
	}
	printf("total=%d\n",total);
	system("pause");
}   