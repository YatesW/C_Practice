#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int c[10]={1,2,3,4,5};
	int d[10];
	//strcpy(d,c);
	memcpy(d,c,sizeof(c));//strcpyֻ������char�ͣ�memcpy�����ڸ�������
	system("pause");
}
