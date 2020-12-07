#include"head.h"
int main()
{
	int arr[N]={3,87,2,93,78,56,61,38,12,40};
	int i;
	////生成随机数
	//srand((time(NULL)));
	//for (i = 0; i < N; i++)
	//{
	//	arr[i]=rand()%100;
	//	printf("%4d",arr[i]);
	//}
	for (i = 0; i < N; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
	//测试heapSort是否可以排序正确
	arrHeap(arr);
	printf("---------------HeapSort--------------\n");
	//打印结果
	for (i = 0; i < N; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
	system("pause");
}

void adjustMaxHeap(int *arr,int adjustPos,int arrLen)//调整堆，自上而下
{
	int dad=adjustPos;//adjustPos是要调整的节点位置
	int son=2*dad+1;
	while (son<arrLen)//比较左右孩子，
					//右边大则son++,从而下一步那右孩子与父亲比较
	{
		if (son+1<arrLen&&arr[son]<arr[son+1])
		{
			son++;
		}
		if (arr[dad]<arr[son])
		{
			SWAP(arr[dad],arr[son]);
			dad=son;
			son=dad*2+1;
		}else
		{
			break;
		}
	}
}

void arrHeap(int *arr)//建堆
{
	int i;
	for (i = N/2-1; i >= 0; i--)
	{
		adjustMaxHeap(arr,i,N);
	}
	SWAP(arr[0],arr[N-1]);
	for (i = N-1; i > 1; i--)//i控制剩下数组的长度
	{
		adjustMaxHeap(arr,0,i);//将剩下的N-1个元素调整为大根堆，
						//不断交换根部元素与数组尾部元素，然后将数组长度减一
		SWAP(arr[0],arr[i-1]);//交换元素，将排好序的元素放在数组尾部
	}
}