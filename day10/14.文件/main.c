#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp = fopen("E:\\王道课件\\2020短期班\\今年课件\\C阶段(tbTree)\\1.代码演示\\Week_2\\day11演示\\文件\\Hello.txt", "r+");
	//绝对路径
	char c;
	if (NULL == fp)//安全检查
	{
		perror("fopen");
		return -1;
	}

	//光标的位置和rewind
	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}
	/*c = fgetc(fp);
	printf("%c\n", c)*/;
	rewind(fp);
	//

	//缓冲区满
	//for (int i = 0; i < 4096; ++i)
	//{
	//	fputc('H', fp);
	//}

	fputc('H', fp);
	//手动刷新缓冲区
	fflush(fp);
	//关闭缓冲区
	fclose(fp);
	system("pause");
}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *fp=fopen("1.txt","r+");//r+为可读可写
//	char c;
//	if (NULL==fp)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//光标位置和rewind
//	/*while ((c=fgetc(fp))!=EOF)
//	{
//		printf("%c",c);
//	}
//	putchar('\n');*/
//	c=fgetc(fp);
//	printf("%c\n",c);
//	rewind(fp);
//	fputc('H',fp);
//	fflush(fp);
//	fclose(fp);
//	system("pause");
//}