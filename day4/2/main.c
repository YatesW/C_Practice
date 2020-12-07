#include<stdio.h>
#include<stdlib.h>
#define N 6
void print(int *b)
{
	int i;
	for(i=0;i<N;++i)
	{
		printf("a[%d]=%d",i,b[i]);
		putchar('\n');
	}
}
int main()
{
	int a[N]={1,2,3,4,5,6};
	print(a);
	system("pause");
} 