#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 7
void merge(int *arr ,int low ,int mid ,int high);
void mergeSort(int *arr ,int low ,int high);
//������Ԫ�صݹ��Ϊ����Ԫ�غ������ݹ�ϲ�
int main()
{
	int i;
	int a[N];
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		a[i]=rand()%100;
		printf("%4d",a[i]);
	}
	putchar('\n');
	puts("-----------------Sort--------------------");
	mergeSort(a,0,N-1);
	for (i = 0; i < N; i++)
	{
		printf("%4d",a[i]);
	}
	putchar('\n');
	system("pause");
}
void merge(int *arr ,int low ,int mid ,int high)//
{
	int b[N];
	int i,j,k;
	for (i = low; i <= high; i++)//��arr���Ƶ�b��
	{
		b[i]=arr[i];
	}
	for (i=low,j=mid+1,k=i;i<=mid&&j<=high;k++)//�ϲ�������������
	{
		if (b[i]<=b[j])
		{
			arr[k]=b[i++];
		}else
		{
			arr[k]=b[j++];
		}	
	}
	while (i<=mid)//��ʣ�ಿ�ַ���arr
	{
		arr[k++]=b[i++];
	}
	while (j<=high)
	{
		arr[k++]=b[j++];
	}
}
void mergeSort(int *arr ,int low ,int high)//�ݹ�ָ�
{
	if (low<high)
	{
		int mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}