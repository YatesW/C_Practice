#include <stdio.h> 
#include <stdlib.h> 
int i=10;//全局变量
void print(int a) 
{ 
	printf("print i=%d\n",i); 
}
int main() 
{ 
	int i=0;
	printf("main i=%d\n",i); 
	i=5;
	print(i);
	printf("main i=%d\n",i); 
	system("pause"); 
	return 0; 
}
