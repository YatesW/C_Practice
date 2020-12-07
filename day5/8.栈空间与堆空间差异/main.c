#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//函数栈空间释放后，函数内所有的局部变量消失
char* print_stack()
{
	char c[]="I am print_stack";
	puts(c);
	return c;
}
//堆空间不会因为函数执行结束而释放
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
	p=print_stack();//数据在栈空间
	puts(p);//打印有异常，出现乱码
	p=print_malloc();
	puts(p);
	system("pause");
}
