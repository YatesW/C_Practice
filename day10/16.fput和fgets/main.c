#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc ,char *argv[])//命令行参数。fopen可以不用写路径	
							  //argc:参数个数 argv[]:每个参数都是一个字符串（文件路径），要传入字符串首地址，故传入二级指针
{
	printf("argc =%d\n",argc);
	printf("argv[0] =%s\n",argv[0]);//argv[0]:可执行文件
	printf("argv[1] =%s\n",argv[1]);//argv[1]：fp指向文件
	/*FILE *fp = fopen("argv[1]", "r+");
	char s[1024];
	fgets(s,1024,fp);
	s[0]-=32;
	fseek(fp,-strlen(s)-1,SEEK_CUR);
	fputs(s,fp);
	puts(s) ;
	fclose(fp);
	system("pause");*/
}