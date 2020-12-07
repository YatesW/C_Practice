#include <stdio.h>
#include <stdlib.h>
#define N 8
//ÔöÁ¿±àĞ´·¨
int main()
{
	int a[N]={3,8,13,1,7,8,3,1},i;
	int res=0,res1=0,res2=0;
	int splice=0;
	for(i=0;i<N;i++)
	{
		res^=a[i];
	}
	splice=res&(-res);
	for(i=0;i<N;i++)
	{
		if(splice&a[i])
		{
			res1^=a[i];
		}else{
			res2^=a[i];
		}
	}
	printf("res=%d\nres1=%d\nres2=%d\n"
		  ,res,res1,res2);
	system("pause");
}   