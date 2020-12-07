#include<stdio.h>
#include<stdlib.h>
#define N 10
int binatySearch(int *arr ,int low ,int high ,int target);
int main()
{
	int a[]={2,14,18,31,32,46,71,82,85,99}; //10
	int pos;//存储查找到的元素位置
	pos=binatySearch(a,0,N-1,14);
	printf("pos=%d\n",pos);
	system("pause");
}
int binatySearch(int *arr ,int low ,int high ,int target)
{
	int mid;
	while (low<=high)
	{
		mid=(low+high)/2;
		if (arr[mid]>target)
		{
			high=mid-1;
		}else if (arr[mid]>target)
		{
			low=mid+1;
		}else
		{
			return mid;
		}
	}
	return -1;
}