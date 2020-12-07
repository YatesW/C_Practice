#include <stdio.h>
#include <stdlib.h> 
//����������Ҫ���������ڵ�����ݽṹ�������� 
typedef struct node
{ 
	char c;//�ڵ��ڴ��Ԫ������ 
	struct node *left;//ָ�����ӽڵ��ָ�� 
	struct node *right;//ָ�����ӽڵ��ָ�� 
}Node,*pNode; 
void preOrder(pNode p) 
{ 
	if(p!=NULL) 
	{ 
		putchar(p->c);//��ӡ��ǰ�ڵ� 
		preOrder(p->left); //��ӡ���ӽڵ� 
		preOrder(p->right); //��ӡ���ӽڵ� 
	} 
}
void midOrder(pNode p) 
{ 
	if(p!=NULL) 
	{ 
		midOrder(p->left); //��ӡ���ӽڵ� 
		putchar(p->c); //��ӡ��ǰ�ڵ� 
		midOrder(p->right); //��ӡ���ӽڵ� 
	} 
}
void latOrder(pNode p) 
{ 
	if(p!=NULL) 
	{ 
		latOrder(p->left); //��ӡ���ӽڵ� 
		latOrder(p->right); //��ӡ���ӽڵ� 
		putchar(p->c); //��ӡ��ǰ�ڵ� 
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
	printf("ǰ�����\n"); 
	preOrder(a[0]); 
	printf("\n�������\n"); 
	midOrder(a[0]);
	printf("\n�������\n");
	latOrder(a[0]);
	system("pause"); 
	return 0;
}


