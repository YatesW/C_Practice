#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p="hello";//将字符长量的首地址赋值给p(数据段字符串常量不可写)
	char c[10]="hello";//等价于strcpy(c,"hello")(栈空间)
	c[0]='H';
	//p='H';//不能对常量区数据进行修改
	puts(p);
	puts(c);
	p=c;
	p="world";//将字符串“world”的地址赋值给p
	//c="world";//非法，c等价于符号常量
	strcpy(c,"world");
	puts(p);
	puts(c);
	system("pause");
}
