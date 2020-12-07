#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 20000000  //�����С
#define M 100 //ȡ��������ʾ���ķ�Χ
void countSort(int *arr);
void print(int *arr);
//T(n)=O(n+m) ʱ�临�Ӷȣ�mΪ����M
int main()
{
	int i;
	int *a=(int*)malloc(4*N);
	time_t start,end;
	memset(a,0,4*N);
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		a[i]=rand()%M;
	}
	//print(a);
	start=time(NULL);
	countSort(a);
	end=time(NULL);
	printf("Time = %3d\n",end-start);
	//print(a);
	free(a);
	a=NULL;
	system("pause");
}
void countSort(int *arr)
{
	int count[M]={0};//��¼M��Χ��ÿ��Ԫ�س��ֵĴ���
	int i,j,k;
	for (i = 0; i < N; i++)
	{
		count[arr[i]]++;
	}
	k=0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < count[i]; j++)
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
	puts("\n------------\n");
}