#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void change(float *b)
{
	*b=1.5;
}
int main()
{
	float a=5.1;
	printf("1.%f\n",a);
	change(&a);//b=&a
	printf("2.%f\n",a);
	system("pause");
}