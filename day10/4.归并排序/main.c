#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 7
void merge(int *arr ,int low ,int mid ,int high);
void mergeSort(int *arr ,int low ,int high);
//将所有元素递归分为单个元素后，两两递归合并
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
	for (i = low; i <= high; i++)//将arr复制到b中
	{
		b[i]=arr[i];
	}
	for (i=low,j=mid+1,k=i;i<=mid&&j<=high;k++)//合并两个有序数组
	{
		if (b[i]<=b[j])
		{
			arr[k]=b[i++];
		}else
		{
			arr[k]=b[j++];
		}	
	}
	while (i<=mid)//将剩余部分放入arr
	{
		arr[k++]=b[i++];
	}
	while (j<=high)
	{
		arr[k++]=b[j++];
	}
}
void mergeSort(int *arr ,int low ,int high)//递归分割
{
	if (low<high)
	{
		int mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}