#include <stdio.h>
#include <stdlib.h> 
//结构体指针 
typedef struct student
{ 
	int num; 
	char name[20];
	char sex; 
}stu_t,*pstu_t;
int main() 
{ 
	stu_t sarr[3]={1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili",'F'}; 
	pstu_t p;//定义结构体指针 
	int num; 
	int i;
	p=sarr; 
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);//方式一获取成员
	//	printf("%d %s %c\n",p->num,p->name,p->sex);//方式二获取成员 
	//	++p;
	//}
	printf("------------------------------\n"); 
	num=p->num++; 
	printf("num=%d,p->num=%d\n",num,p->num); 
	num=p++->num; 
	printf("num=%d,p->num=%d\n",num,p->num); 
	system("pause"); 
}