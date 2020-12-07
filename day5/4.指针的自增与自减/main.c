#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 
int main()
{
	int a[3]={2,7,8};
	int *p;
	int j;
	p=a;
	j=*p++;//j=*p,p++
	printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);
	j=p[0]++;
	printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);
	system("pause");
}