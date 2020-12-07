#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
#define MAX 100
#define SWAP(a,b){int tmp=a;	a=b;		b=tmp;}//带参数的宏，交换
void bubbleSort(int *arr);
void selectSort(int *arr);
void insertSort(int *arr);
void shellSort(int *arr);
int divide(int *arr,int beg,int end);
void quickSort(int *arr,int beg,int end);