#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 10
#define SWAP(a,b){int tmp=a; a=b; b=tmp;}
void adjust(int *arr ,int adjustPos ,int arrLen);
void Heap(int *arr);
int main()
{
	int arr[N];
	int i;
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		arr[i]=rand()%100;
		printf("%4d",arr[i]);
	}
	putchar('\n');
	printf("--------------Heap-------------\n");
	Heap(arr);
	for (i = 0; i < N; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
	system("pause");
}
void adjust(int *arr ,int adjustPos ,int arrLen)
{
	int dad=adjustPos;
	int son=2*dad+1;
	while (son<arrLen)
	{
			if (son+1<arrLen&&arr[son]<arr[son+1])
		{
			son++;
		}
		if (arr[dad]<arr[son])
		{
			SWAP(arr[dad],arr[son]);
			dad=son;
			son=2*dad+1;
		}else
		{
			break;
		}
	}
}
void Heap(int *arr)
{
	int i;
	for (i = N/2-1; i >=0; i--)
	{
		adjust(arr,i,N);
	}
	SWAP(arr[0],arr[N-1]);
	for (i = N-1; i > 1; i--)
	{
		adjust(arr,0,i);
		SWAP(arr[0],arr[i-1]);
	}
}