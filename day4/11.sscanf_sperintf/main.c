#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int num=1001;
	int ret;
	float score=98.5;
	char name[20]="lele";
	char str[1000];
	sprintf(str,"%d %5.2f %s",num,score,name);
	printf("after sprintf str=%s\n",str);
	num=0,score=0;
	//memset(name,0,sizeof(name));//��Ϊ��
	ret=sscanf(str,"%d%f%s",&num,&score,&name);//���ַ�����ʽ��Ϊ��ͬ
										//���������Ͳ������Ӧ������
	printf("num=%d,score=%f,name=%s\n",num,score,name);
	num=atoi("123");//�ַ���ת����
	score=atof("92.4");//�ַ���ת������
	system("pause");
}