#include<stdio.h>
#include<stdlib.h>
//��n�Ľ׳�
int func(int i)
{
	if(1==i)
	{
		return 1;
	}
	return i*func(i-1);
}
//��¥��
int step(int n)
{
	if(1==n)
	{
		return 1;
	}
	if(2==n)
	{
		return 2;
	}
	return step(n-1)+step(n-2);
}
int main()
{
	int n,s;
	scanf("%d",&n);
	func(n);
	printf("%d\n",func(n));
	scanf("%d",&s);
	step(s);
	printf("%d\n",step(s));
	system("pause");
}