#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp = fopen("E:\\�����μ�\\2020���ڰ�\\����μ�\\C�׶�(tbTree)\\1.������ʾ\\Week_2\\day11��ʾ\\�ļ�\\Hello.txt", "r+");
	//char str[20]={0};
	///*fread(str,sizeof(char),sizeof(str),fp);
	//puts(str);*/
	//char str2[]="how are you!\n";
	//fwrite(str2,sizeof(char),sizeof(str2),fp);
	char str3[]="hello\nworld\n";
	fwrite(str3,1,strlen(str3),fp);
	fseek(fp,-14,SEEK_CUR);
	memset(str3,0,strlen(str3));
	fread(str3,1,strlen(str3),fp);
	puts(str3);
	fclose(fp);
	system("pause");

	////�Լ�����һ���ļ�  W:����һ����д���ļ�
	//FILE *fp = fopen("Yates_W.txt", "w");
	//char s[]="1005 Lisi 95 83 85\n";
	//if(NULL==fp)
	//{
	//	perror("fopen");
	//	return -1;
	//}
	//fwrite(s,1,strlen(s),fp);
	//fclose(fp);
}