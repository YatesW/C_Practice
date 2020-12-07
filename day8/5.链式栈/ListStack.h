typedef int elem_t;
typedef struct node {
	elem_t data;
	struct node *pnext;
} stackNode_t, *pstackNode_t;
typedef struct stack {
	pstackNode_t phead;
	int size;
} stack_t, *pstack_t;
void stackInit(pstack_t pstack);
void push(pstack_t pstack, elem_t data);
void pop(pstack_t pstack);
elem_t top(pstack_t pstack);
int isEmpty(pstack_t pstack);
int getSize(pstack_t pstack);
void print(pstack_t pstack);