#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ṹ�����ֲ�����=��ֵ��&ȡ��ַ��.�ҵ���Ա
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
	struct student s1={1001,"lele",'M',20,85.4,"Shenzhen"};//�ṹ�嶨�Ժ��ܵ���"s1={}"���и�ֵ
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