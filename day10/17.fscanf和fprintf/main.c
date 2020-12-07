#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
	int num;
	char name[20];
	float score;
}stu_t;
int main(int argc,char *argv[])
{
	FILE *fp=fopen(argv[1],"r+");
	int i=0;
	stu_t arr[5];
	memset(arr,0,sizeof(stu_t));
	//stu_t s={1001,"Lele",99.5};
	if (NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	//fprintf(fp,"num =%d ,name =%s ,score =%5.2f\n",s.num,s.name,s.score);
	while (fscanf(fp,"%d %s %f",&arr[i].num,arr[i].name,&arr[i].score)!=EOF)
	{
		fprintf(stdout,"num =%d ,name =%s ,score =%5.2f\n",arr[i].num,arr[i].name,arr[i].score);//利用stdout将数据输出到屏幕
		i++;
	}
	fclose(fp);
	system("pause");
}