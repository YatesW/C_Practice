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
//定义函数指针，初始化只能赋函数名
int main()
{
	void (*p)();//定义了一个函数指针变量
	p=b;//函数指针的返回值以及入参要与函数保持一致
	a(p);
	system("pause");
}