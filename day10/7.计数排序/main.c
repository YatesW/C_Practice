#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 3000000  //�����С
#define M 100 //ȡ��������ʾ���ķ�Χ
void countSort(int *arr);
void print(int *arr);
//T(n)=O(n+m) ʱ�临�Ӷȣ�mΪ����M
int main()
{
	int i;
	int *a=(int*)malloc(4*N);
	//int a[N];
	time_t start,end;
	srand(time(NULL));
	for (i = 0; i <N; i++)
	{
		a[i]=rand()%M;
	}
	//print(a);
	puts("\n-----------------------------\n");
	start=time(NULL);
	countSort(a);
	end=time(NULL);
	printf("time = %4d\n",end-start);
	//print(a);
	free(a);
	a=NULL;
	system("pause");
}
void countSort(int *arr)
{
	int count[M]={0};
	int i,j,k;//���������ÿ��Ԫ�س��ֵĴ���������count��
	for (i = 0; i < N; i++)
	{
		count[arr[i]]++;
	}
	k=0;
	//k��¼��������ЩԪ���Ѿ�����ֵ����ÿ����ֵ���ֵĴ������δ�ǰ��������arr�м���
	for (i = 0; i < M; i++)
	{
		for (j=0;j<count[i];j++)
		{
			arr[k++]=i;
		}
	}
}
void print(int *arr)
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%4d",arr[i]);
	}
}