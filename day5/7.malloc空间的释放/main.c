#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 
int main()
{
	int *p1,*p2,*p3;//������������ָ�� 
	p1=(int*)malloc(4);//����4���ֽڿռ䣬���������1
	*p1=1;
	p2=(int*)malloc(4);//����4���ֽڿռ䣬���������2 
	*p2=2; 
	free(p1);//�ͷ�ԭ��Ϊp1����Ŀռ䣬��������û�ж�p1��ֵΪNULL
	p1=NULL;
	p3=(int*)malloc(4);
	*p3=3; 
	printf("*p3=%d\n",*p3);//��δ�ӡֵΪ3 
	//*p1=100;
	*p3=100;
	printf("*p3=%d\n",*p3);//���ǲ�û�ж�*p3�����޸ģ����������ӡֵΪ100
	system("pause");
}