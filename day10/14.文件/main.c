#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp = fopen("E:\\�����μ�\\2020���ڰ�\\����μ�\\C�׶�(tbTree)\\1.������ʾ\\Week_2\\day11��ʾ\\�ļ�\\Hello.txt", "r+");
	//����·��
	char c;
	if (NULL == fp)//��ȫ���
	{
		perror("fopen");
		return -1;
	}

	//����λ�ú�rewind
	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}
	/*c = fgetc(fp);
	printf("%c\n", c)*/;
	rewind(fp);
	//

	//��������
	//for (int i = 0; i < 4096; ++i)
	//{
	//	fputc('H', fp);
	//}

	fputc('H', fp);
	//�ֶ�ˢ�»�����
	fflush(fp);
	//�رջ�����
	fclose(fp);
	system("pause");
}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *fp=fopen("1.txt","r+");//r+Ϊ�ɶ���д
//	char c;
//	if (NULL==fp)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���λ�ú�rewind
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