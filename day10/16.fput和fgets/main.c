#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc ,char *argv[])//�����в�����fopen���Բ���д·��	
							  //argc:�������� argv[]:ÿ����������һ���ַ������ļ�·������Ҫ�����ַ����׵�ַ���ʴ������ָ��
{
	printf("argc =%d\n",argc);
	printf("argv[0] =%s\n",argv[0]);//argv[0]:��ִ���ļ�
	printf("argv[1] =%s\n",argv[1]);//argv[1]��fpָ���ļ�
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