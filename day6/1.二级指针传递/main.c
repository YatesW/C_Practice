#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//����ָ��ֻ������һ��ָ��Ĵ�����ƫ�ƣ�����һ��ָ�����ͱ���һ��
//����ָ�붨��һ�������βΣ���������һ�㲻�������ָ�룬�����壬��ʼ����һ��ָ��ȡ��ַ
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