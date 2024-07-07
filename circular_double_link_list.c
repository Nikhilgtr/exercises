#include <stdio.h>
#include <stdlib.h>

typedef struct dl_list {
	struct dl_list *next;
	struct dl_list *prev;
	int data;
}dl_list_t;

dl_list_t * data_insert(int data)
{
	dl_list_t *node = NULL;
	node = (dl_list_t *)malloc(sizeof(dl_list_t));
	if(node == NULL)
	{
		printf("malloc failed\n");
		return NULL;
	}
	node->next = NULL ;
	node->prev = NULL;
	node->data = data;
	return node;	
}

void insert_element(dl_list_t **head, int data)
{
	dl_list_t *temp = NULL;
	dl_list_t *new_node = NULL;
	if(*head == NULL) {
		*head = data_insert(data);
		(*head)->next = *head;
	} else {
		temp = *head;
		while(temp->next != *head)
			temp = temp->next;
		new_node = data_insert(data);
		new_node->next = *head;
		new_node->prev = temp;
		temp->next = new_node; 
	}
}

void print_list_forward(dl_list_t *head)
{
	int count = 0;
	dl_list_t *forward = NULL;
	if(head == NULL) { 
		printf("no list found\n");
		return;
	} else {
		forward = head;
		while(forward->next != head)
		{
			printf("list[%d] = %d\n", count++, forward->data);
			forward = forward->next;
		}
		printf("list[%d] = %d\n", count++, forward->data);
	}
}

void print_list_backward(dl_list_t *head)
{
	int count = 0;
	
	dl_list_t *forward = NULL;
	if(head == NULL) { 
		printf("no list found\n");
		return;
	} else {
		forward = head;
		while(forward->next != head)
			forward = forward->next;
		
		printf("list[%d] = %d\n", count++, forward->data);
		while(forward != head) {
			forward = forward->prev;
		printf("list[%d] = %d\n", count++, forward->data);
		}
	}
}

void delete_list(dl_list_t **head)
{
	dl_list_t *temp = NULL;
	dl_list_t *prev = NULL;
	if(head == NULL) { 
		printf("no list found\n");
		return;
	} else {
		temp = *head;
		while(temp->next != *head)
		{
			prev = temp->next;
			free(temp);
			temp = NULL;
			temp = prev;
		}
		if(temp->next == *head) {
			free(temp);
			temp = NULL;
		}
		*head = NULL;
	}
}


int main()
{
	dl_list_t *head = NULL;
	
	insert_element(&head, 10);
	insert_element(&head, 20);
	insert_element(&head, 30);
	insert_element(&head, 40);
	
	print_list_forward(head);
	printf("\n");	
	print_list_backward(head);
	printf("\n");	
	delete_list(&head);
	printf("\n");	
	print_list_forward(head);
	return 0;
	
}
