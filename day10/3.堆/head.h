#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N	10
#define SWAP(a,b)	{int tmp=a;	a=b;		b=tmp;}
void adjustMaxHeap(int *arr,int adjustPos,int arrLen);//������
void arrHeap(int *arr);//����
//������������qsort
void heapSort(void *arr, size_t num, size_t size,int(*compare)(const void *a, const void *b));
//�������߲��Ƕ�ײ���װ[��������ѣ����õ�����������������]

//�ȽϺ���
int cmp(const void *op1,const void *op2);