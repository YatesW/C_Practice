#include"head.h"
int main()
{
	int *a=(int*)malloc(SIZE*4);
	int i;
	int(*pmyCompare)(const void *op1,const void *op2)=myCompare;
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
	printf("Sort:\n");
	qsort(a,SIZE,sizeof(int),myCompare);
	//qsort(a,SIZE,sizeof(int),pmyCompare);
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",a[i]);
	}
	putchar('\n');
	/*divide(a,0,SIZE-1);
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
	putchar('\n');*/
	system("pause");
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
int myCompare(const void *op1,const void *op2)
{
	//void *ָ�룺�����ͻ�ûȷ���á�ʹ��ǰ����Ҫǿ������ת������������ָ��
	int *p1=(int*)op1;
	int *p2=(int*)op2;
	/*int i1=*p1;
	int i2=*p2;
	return i1-i2;*/
	return *p1-*p2;
}
