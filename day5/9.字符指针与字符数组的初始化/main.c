#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p="hello";//���ַ��������׵�ַ��ֵ��p(���ݶ��ַ�����������д)
	char c[10]="hello";//�ȼ���strcpy(c,"hello")(ջ�ռ�)
	c[0]='H';
	//p='H';//���ܶԳ��������ݽ����޸�
	puts(p);
	puts(c);
	p=c;
	p="world";//���ַ�����world���ĵ�ַ��ֵ��p
	//c="world";//�Ƿ���c�ȼ��ڷ��ų���
	strcpy(c,"world");
	puts(p);
	puts(c);
	system("pause");
}
