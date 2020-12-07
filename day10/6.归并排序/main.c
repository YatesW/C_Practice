#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 50
void merge(int *arr ,int low ,int mid ,int high);
void mergeSort(int *arr ,int low ,int high);
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
	puts("\n-------------Sort-------------");
	mergeSort(a,0,N-1);
	for (i = 0; i < N; i++)
	{
		printf("%4d",a[i]);
	}
	putchar('\n');
	system("pause");
}
void merge(int *arr ,int low ,int mid ,int high)
{
	int i,j,k;
	int b[N];
	for (i = low; i <= high; i++)
	{
		b[i]=arr[i];
	}
	for (i = low ,j = mid+1 ,k = low; i <= mid && j <= high; k++)
	{
		if (b[i]<=b[j])
		{
			arr[k]=b[i++];
		}else
		{
			arr[k]=b[j++];
		}
	}
	while (i <= mid)
	{
		arr[k++]=b[i++];
	}
	while (j <= high)
	{
		arr[k++]=b[j++];
	}
}
void mergeSort(int *arr ,int low ,int high)
{
	if (low < high)
	{
		int mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}