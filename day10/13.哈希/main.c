#include <stdio.h>
#include <stdlib.h>
#define MAXKEY 1000
int hash(char *key) //¹þÏ£º¯Êý
{ 
	int h = 0, g;
	while (*key) 
	{ 
		h = (h << 4) + *key++;
		g = h & 0xf0000000; 
		if (g)
			h ^= g >> 24; 
		h &= ~g; 
	}
	return h % MAXKEY; 
}
int main()
{
	char *pStr[5]={"xiongda","lele","hanmeimei",
				  "wangdao","fenghua"};
	char *hashTable[MAXKEY]={0};
	int i;
	int index;
	for (i = 0; i < 5; i++)
	{
		printf("%10s hashTable = %d\n",pStr[i],hash(pStr[i]));
		hashTable[hash(pStr[i])]=pStr[i];
	}
	while (1)
	{
	printf("\nPlease input:\n");
	scanf("%d",&index);
	printf("res :\n %10s\n-----------\n",hashTable[index]);
	}
	system("pause");
}