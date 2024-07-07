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
	node->next = NULL;
	node->prev = NULL;
	node->data = data;
	return node;	
}

void insert_element(dl_list_t **head, int data)
{
	dl_list_t *temp = NULL;
	if(*head == NULL) {
		*head = data_insert(data);
	} else {
		temp = *head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = data_insert(data);
		temp->next->prev = temp; //updating prev node of the new node
	}
}

void print_list(dl_list_t *head)
{
	int count = 0;
	if(head == NULL) { 
		printf("no list found\n");
		return;
	} else {
		while(head != NULL)
		{
			printf("list[%d] = %d\n", count++, head->data);
			head = head->next;
		}
		printf("\n\n");
	}
}

void reverse_list(dl_list_t **head)
{
	dl_list_t *current_node = NULL;
	dl_list_t *temp = NULL;
	if(*head == NULL) { 
		printf("no list found\n");
		return;
	} else {
		current_node = *head;
		while(current_node != NULL)
		{
			//only swap prev and next node of every node
			temp = current_node->prev;
			current_node->prev = current_node->next;
			current_node->next = temp;
			current_node = current_node->prev;
		}
		if(temp != NULL)
			*head = temp->prev;
	}
}

void delete_list(dl_list_t **head)
{
	dl_list_t *current_node = NULL;
	dl_list_t *temp = NULL;
	
	if(*head == NULL) { 
		printf("no list found\n");
		return;
	} else {
		current_node = *head;
		while(current_node != NULL)
		{
			temp = current_node->next;
			free(current_node);
			current_node = temp;
		}
		*head = NULL;
	}
}

int main()
{
	dl_list_t *head = NULL;
	
	insert_element(&head, 10);
	//insert_element(&head, 20);
	//insert_element(&head, 30);
	//insert_element(&head, 40);
	
	print_list(head);
	reverse_list(&head);
	print_list(head);
	delete_list(&head);
	print_list(head);
	
	return 0;
}
