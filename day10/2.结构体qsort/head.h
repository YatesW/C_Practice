#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define SWAP(a,b){int tmp=a;	a=b;		b=tmp;}//带参数的宏，交换
typedef struct student{
	int num;
	char name[20];
	float Chinese;
	float Math;
	float English;
}stu_t,*pstu_t;
int numCompare(const void *op1,const void *op);
int scoreCompare(const void *op1,const void *op2);
int mathCompare(const void *op1,const void *op2);
void print(stu_t *arr);