#include <stdio.h>
#include <stdlib.h> 
//首先我们需要将二叉树节点的数据结构定义清晰 
typedef struct node
{ 
	char c;//节点内存的元素类型 
	struct node *left;//指向左子节点的指针 
	struct node *right;//指向右子节点的指针 
}Node,*pNode; 
void preOrder(pNode p) 
{ 
	if(p!=NULL) 
	{ 
		putchar(p->c);//打印当前节点 
		preOrder(p->left); //打印左子节点 
		preOrder(p->right); //打印右子节点 
	} 
}
void midOrder(pNode p) 
{ 
	if(p!=NULL) 
	{ 
		midOrder(p->left); //打印左子节点 
		putchar(p->c); //打印当前节点 
		midOrder(p->right); //打印右子节点 
	} 
}
void latOrder(pNode p) 
{ 
	if(p!=NULL) 
	{ 
		latOrder(p->left); //打印左子节点 
		latOrder(p->right); //打印右子节点 
		putchar(p->c); //打印当前节点 
	} 
}
#define N 10 
int main() 
{ 
	char c[N+1]="ABCDEFGHIJ";
	int i,j;
	pNode a[N];
	for (i=0;i<N;i++)
	{
		a[i]=(pNode)calloc(1,sizeof(Node));
		a[i]->c=c[i];
	}
	for (i=1,j=0;i<N;i++)
	{
		if (NULL==a[j]->left)
		{
			a[j]->left=a[i];
		}
		else if(NULL==a[j]->right)
		{
			a[j]->right=a[i];
			j++;
		}
	}
	printf("前序遍历\n"); 
	preOrder(a[0]); 
	printf("\n中序遍历\n"); 
	midOrder(a[0]);
	printf("\n后序遍历\n");
	latOrder(a[0]);
	system("pause"); 
	return 0;
}


