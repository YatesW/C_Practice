#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����ջ�ռ��ͷź󣬺��������еľֲ�������ʧ
char* print_stack()
{
	char c[]="I am print_stack";
	puts(c);
	return c;
}
//�ѿռ䲻����Ϊ����ִ�н������ͷ�
char* print_malloc()
{
	char *p;
	p=(char*)malloc(20);
	strcpy(p,"I am print_malloc");
	puts(p);
	return p;
}
int main()
{
	char *p;
	p=print_stack();//������ջ�ռ�
	puts(p);//��ӡ���쳣����������
	p=print_malloc();
	puts(p);
	system("pause");
}
