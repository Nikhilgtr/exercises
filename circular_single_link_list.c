#include <stdio.h>
#include <stdlib.h>

typedef struct c_sl_list {

	struct c_sl_list *next;
	int data;
}c_sl_list_t;

c_sl_list_t *
insert_data(int data, c_sl_list_t *head)
{
	c_sl_list_t *node = NULL;
	node = (c_sl_list_t *)malloc(sizeof(c_sl_list_t));
	if(node == NULL)
	{
		printf("Memory alloc failure\n");
		return NULL;
	}
	node->data = data;
	node->next = head;
}

//A-B-C-A
void 
insert_element(c_sl_list_t **head, int data)
{
	c_sl_list_t *temp_node =  NULL;

	if(*head == NULL) {
		*head = insert_data(data, *head);
		(*head)->next = *head;
	} else {
		//seeking last node in the list
		temp_node = *head;
		while(temp_node->next != *head)
			temp_node = temp_node->next; 
		
		temp_node->next = insert_data(data, *head);	
	}
}

void print_list(c_sl_list_t *head)
{
	c_sl_list_t * temp_node = head;
	int list_index = 0;
	if(head == NULL) {
		printf("No list found\n");	
		return;
	}
	do{
		printf("List[%d] = %d\n",list_index, temp_node->data);
		temp_node = temp_node->next;
		list_index++;
	}while(temp_node != head);

	printf("\n");
}
void delete_list(c_sl_list_t **head)
{
	c_sl_list_t * temp_node = NULL;
	c_sl_list_t * next_node = NULL;

	if(*head == NULL) {
		printf("No Link list\n");
		return ;	
	} else {
		temp_node = *head;
		do{
			next_node = temp_node->next;
			if(next_node == *head)
				printf("Last element is %d\n",temp_node->data);
			free(temp_node);
			temp_node = next_node;

		}while(temp_node != *head);
		*head = NULL;	
	}
}

//A->B->C->D->A
//D->C->B->A->D

void reverse_list(c_sl_list_t **head)
{
	c_sl_list_t * prev = NULL;
	c_sl_list_t * next = NULL;
	c_sl_list_t * current = NULL;

	if(*head == NULL) {
		printf("No Link list\n");
		return ;	
	} else {
		current = *head;
		do{
			//storing next
			next = current->next;
			//interchanging the link
			current->next = prev;
			//move current next
			prev = current;
			current = next;

		}while(current != *head);
		(*head)->next = prev;
		*head = prev;
	}
}

void find_data(c_sl_list_t* head, int data)
{
	int location = 0;
	if(head == NULL) {
		printf("List is empty\n");
		return;
	} else {
		//seeking till last node in the list
		while(head->next != NULL) {
			head = head->next; 
			location++;	
			if(head->data == data) {
				printf("Data matched found at location = %d in list\n",location);
				return;
			}
		}
	}
	
}

int main()
{
	c_sl_list_t *head = NULL;
	insert_element(&head, 5);
	insert_element(&head, 6);
	insert_element(&head, 7);
	insert_element(&head, 8);
	insert_element(&head, 10);
	print_list(head);
	reverse_list(&head);
	print_list(head);
	reverse_list(&head);
	print_list(head);
	delete_list(&head);
	print_list(head);
	/*
	reverse_list(&head);
//	delete_list(&head);
	print_list(head);
	
	reverse_list(&head);
	print_list(head);
	find_data(head,7);
	delete_list(&head);
	*/
}



