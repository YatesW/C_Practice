#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//结构体三种操作：=赋值；&取地址；.找到成员
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};
int main()
{
	struct student s1={1001,"lele",'M',20,85.4,"Shenzhen"};//结构体定以后不能单独"s1={}"进行赋值
	struct student s[3];
	struct student s2=s1;
	int i,ret;
	printf("%d %s %c %d %f %s\n",s1.num,s1.name,
			s1.sex,s1.age, s1.score,s1.addr);
	for (i = 0; i < 3; i++)
	{
		ret=scanf("%d %s %c %d %f %s",&s[i].num,s[i].name,
			&s[i].sex,&s[i].age,&s[i].score,s[i].addr);
		printf("%d %s %c %d %f %s\n",s[i].num,s[i].name,
			s[i].sex,s[i].age, s[i].score,s[i].addr);
		printf("ret=%d\n",ret);
	}
	system("pause");
}