#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//二级指针只服务于一级指针的传递与偏移，且与一级指针类型保持一致
//二级指针定义一般是在形参；主函数中一般不定义二级指针，若定义，初始化将一级指针取地址
void change(int **pi , int *pj)
{
	*pi=pj;
}
int main()
{
	int mm1=160,mm2=170;
	int *p1,*p2;
	p1=&mm1;
	p2=&mm2;
	printf("mm1=%d,mm2=%d,*p1=%d,*p2=%d\n",mm1,mm2,*p1,*p2);
	change(&p1,p2);
	printf("mm1=%d,mm2=%d,*p1=%d,*p2=%d\n",mm1,mm2,*p1,*p2);
	system("pause");
}