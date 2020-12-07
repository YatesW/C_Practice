#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N	10
#define SWAP(a,b)	{int tmp=a;	a=b;		b=tmp;}
void adjustMaxHeap(int *arr,int adjustPos,int arrLen);//调整堆
void arrHeap(int *arr);//建堆
//堆排序，类似于qsort
void heapSort(void *arr, size_t num, size_t size,int(*compare)(const void *a, const void *b));
//以上三者层层嵌套并封装[建立大根堆，但得到的数列是升序数列]

//比较函数
int cmp(const void *op1,const void *op2);