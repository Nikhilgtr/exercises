#include <stdio.h>
#include <stdlib.h>

#define STACK_EMPTY -1

typedef struct stack {
	int *data;
	int top;
	int size;
}stack_t; 


stack_t * create_stack(int size)
{
	stack_t *tmp = malloc(sizeof(stack_t));
	tmp->top = STACK_EMPTY;
	tmp->data = malloc(sizeof(int)*size);
	tmp->size = size;
	return tmp;
}

int get_top(stack_t *tmp)
{
	return (tmp->top);
}

void push(stack_t *tmp, int data)
{
	if(get_top(tmp) == tmp->size)
	{
		printf("Stack full\n");
		return;
	}
	else {
		tmp->top++;
		tmp->data[tmp->top] = data;
	}
}

int pop(stack_t *tmp)
{
	if(get_top(tmp) == STACK_EMPTY)
	{
		printf("Stack empty\n");
		return STACK_EMPTY;
	}
	else {
		tmp->top--;
		return tmp->data[tmp->top];
	}
}


int main()
{
	stack_t *a = create_stack(5);
	push(a , 10);
	push(a, 20);
	push(a, 30);
	push(a, 40);
	push(a, 50);
	push(a, 60);
	push(a, 70);
	
	while(get_top(a) != STACK_EMPTY)
	{
		printf("data = %d\n", pop(a));
	}
	pop(a);
}
