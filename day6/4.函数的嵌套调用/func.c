#include"func.h"

void print_message()
{
	printf("How do you do!\n");
	print_star(3);
}

int print_star(int a)//a���β�
{
	puts("**************\n");
	return a+4;
}