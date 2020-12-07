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
	//memset(name,0,sizeof(name));//置为零
	ret=sscanf(str,"%d%f%s",&num,&score,&name);//将字符串格式化为不同
										//的数据类型并放入对应变量中
	printf("num=%d,score=%f,name=%s\n",num,score,name);
	num=atoi("123");//字符型转整形
	score=atof("92.4");//字符型转浮点型
	system("pause");
}