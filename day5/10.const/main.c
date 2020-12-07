#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//const在前
	char c[10]="hello";
	const char *pStr;//const在前代表指针指向的内容不能修改
	pStr=c;
	c[0]='H';
	pStr="World";
	//pStr[0]='A';

	//const在后
	//char *const pStr=c;//const在后代表指针的指向不能修改
	//pStr[0]='A';//合法
	system("pause");
}
