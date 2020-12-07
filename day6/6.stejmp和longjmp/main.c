//goto不能跨函数，只能在函数内使用
#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

void b(jmp_buf envbuf)
{
	printf("I am func b\n");
	longjmp(envbuf,1);
}

void a(jmp_buf envbuf)
{
	printf("I am a func\n");
	b(envbuf);
	printf("after b ,I am a func\n");
}

int main()
{
	jmp_buf envbuf;
	int ret;
	ret=setjmp(envbuf);
	if(0==ret)
	{
		a(envbuf);
	}
	system("pause");
}