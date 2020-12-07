#include<stdio.h>
#include<stdlib.h>
struct node{	//成员并存，16B
	int i;
	float f;
	double b;
};
union unode{	//8B，大小取最大的成员。不并存
	int i;
	float f;
	double b;
};
int main()
{
	struct node s1;
	union unode v1;
	s1.i=1;
	s1.f=1.1;
	s1.b=1.1111111111111;
	//
	v1.i=1;
	v1.f=1.1;//f覆盖i
	v1.b=1.1111111111111;
}