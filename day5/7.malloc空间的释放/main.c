#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 
int main()
{
	int *p1,*p2,*p3;//定义三个整型指针 
	p1=(int*)malloc(4);//申请4个字节空间，存放整型数1
	*p1=1;
	p2=(int*)malloc(4);//申请4个字节空间，存放整型数2 
	*p2=2; 
	free(p1);//释放原有为p1申请的空间，但是我们没有对p1赋值为NULL
	p1=NULL;
	p3=(int*)malloc(4);
	*p3=3; 
	printf("*p3=%d\n",*p3);//这次打印值为3 
	//*p1=100;
	*p3=100;
	printf("*p3=%d\n",*p3);//我们并没有对*p3进行修改，但是这里打印值为100
	system("pause");
}