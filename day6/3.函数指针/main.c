#include<stdio.h>
#include<stdlib.h>
void b()
{
	printf("I an func b\n");
}
void a(void(*p)())
{
	p();
}
//���庯��ָ�룬��ʼ��ֻ�ܸ�������
int main()
{
	void (*p)();//������һ������ָ�����
	p=b;//����ָ��ķ���ֵ�Լ����Ҫ�뺯������һ��
	a(p);
	system("pause");
}