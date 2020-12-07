#include <stdio.h> 
#include <stdlib.h>
void move(char x ,char y)
{
	printf("%c-->%c\n",x,y);
}

void hanoi(int n ,char one ,char two ,char three)
{
	if(1==n)
	{
		move(one,three);
	}
	else {
		hanoi(n-1,one,three,two);
		move(one ,three);
		hanoi(n-1,two,one,three);
	}
}
int main()
{
	int n;
	printf("Input the number of disk:");
	scanf("%d",&n);
	printf("The step to moving %d diskes:\n",n);
	hanoi(n,'A','B','C');
	system("pause");
}