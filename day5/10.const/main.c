#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//const��ǰ
	char c[10]="hello";
	const char *pStr;//const��ǰ����ָ��ָ������ݲ����޸�
	pStr=c;
	c[0]='H';
	pStr="World";
	//pStr[0]='A';

	//const�ں�
	//char *const pStr=c;//const�ں����ָ���ָ�����޸�
	//pStr[0]='A';//�Ϸ�
	system("pause");
}
