#include"head.h"
int main()
{
	int *a=(int*)malloc(SIZE*4);
	int i;
	/*int b[SIZE]={3,87,2,93,78,56,61,38,12,40};
	for (i = 0; i < SIZE; i++)
	{
		a[i]=b[i];
		printf("%4d",a[i]);
	}*/
	srand(time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		a[i]=rand()%MAX;
		printf("%4d",a[i]);
	}
	putchar('\n');
	/*bubbleSort(a);
	selectSort(a);
	insertSort(a);
	shellSort(a);*/
	divide(a,0,SIZE-1);
	printf("divide\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",a[i]);
	}
	putchar('\n');
	quickSort(a,0,SIZE-1);
	printf("quicksort\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",a[i]);
	}
	putchar('\n');
	system("pause");
}
void bubbleSort(int *arr)
{
	int i,j;
	for (i = SIZE-1; i >0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				SWAP(arr[j],arr[j+1]);
			}
		}
	}
	printf("bubble\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
}
void selectSort(int *arr)
{
	int i,j;
	int min_pos;
	for (i = 0; i < SIZE-1; i++)
	{
		min_pos=i;
		for (j = i; j < SIZE; j++)
		{
			if (arr[i]>arr[j])
			{
				min_pos=j;
			}
			SWAP(arr[i],arr[min_pos]);
		}
	}
	printf("select\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
}
void insertSort(int *arr)
{
	int i,j;
	int toInsert;
	for (i = 1; i < SIZE; i++)//�����Ҫ����������ڲ����
	{
		toInsert=arr[i];
		for (j = i-1; j>=0&&arr[j]>toInsert; --j)
		{
			arr[j+1]=arr[j];//����toInsert��������
		}
		arr[j+1]=toInsert;
	}
	printf("insert\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
}
void shellSort(int *arr)//�Ľ����������
{
	int i,j;
	int gap;//����
	int toInsert;
	for (gap=SIZE>>1; gap>0; gap>>=1)
	{
		for (i = gap; i < SIZE; i++)
		{
			toInsert=arr[i];
			for (j =i-gap ; j >=0&&arr[j]>toInsert ; j-=gap)
			{
				arr[j+gap]=arr[j];//����toInsert��������
			}
			arr[j+gap]=toInsert;
		}
	}
	printf("shell\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",arr[i]);
	}
	putchar('\n');
}
int divide(int *arr,int beg,int end)
{
	int i,j;//i,j���ڱ�0~j-1�ȷָ�ֵС��j~i-1�ȷָ�ֵ��i�Ƕ�ȡ����
		j=beg;
		for (i = beg; i < end; i++)
		{
			if (arr[i]<arr[end])
			{
				SWAP(arr[j],arr[i]);
				j++;
			}
		}
		SWAP(arr[end],arr[j]);
		return j;
}
void quickSort(int *arr,int beg,int end)
{
	if(beg<end)//�ݹ�����
	{
		int ret=divide(arr,beg,end);
		quickSort(arr,beg,ret-1);
		quickSort(arr,ret+1,end);
	}
}