#include"head.h"
int main()
{
	int arr[N]={3,87,2,93,78,56,61,38,12,40};
	int i;
	////���������
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
	//����heapSort�Ƿ����������ȷ
	arrHeap(arr);
	printf("---------------HeapSort--------------\n");
	//��ӡ���
	for (i = 0; i < N; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
	system("pause");
}

void adjustMaxHeap(int *arr,int adjustPos,int arrLen)//�����ѣ����϶���
{
	int dad=adjustPos;//adjustPos��Ҫ�����Ľڵ�λ��
	int son=2*dad+1;
	while (son<arrLen)//�Ƚ����Һ��ӣ�
					//�ұߴ���son++,�Ӷ���һ�����Һ����븸�ױȽ�
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

void arrHeap(int *arr)//����
{
	int i;
	for (i = N/2-1; i >= 0; i--)
	{
		adjustMaxHeap(arr,i,N);
	}
	SWAP(arr[0],arr[N-1]);
	for (i = N-1; i > 1; i--)//i����ʣ������ĳ���
	{
		adjustMaxHeap(arr,0,i);//��ʣ�µ�N-1��Ԫ�ص���Ϊ����ѣ�
						//���Ͻ�������Ԫ��������β��Ԫ�أ�Ȼ�����鳤�ȼ�һ
		SWAP(arr[0],arr[i-1]);//����Ԫ�أ����ź����Ԫ�ط�������β��
	}
}