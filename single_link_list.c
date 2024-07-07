#include <stdio.h>
#include <stdlib.h>

typedef struct sl_list {

	struct sl_list *next;
	int data;
}sl_list_t;

sl_list_t *
insert_data(int data)
{
	sl_list_t *node = NULL;
	node = (sl_list_t *)malloc(sizeof(sl_list_t));
	if(node == NULL)
	{
		printf("Memory alloc failure\n");
		return NULL;
	}
	node->data = data;
	node->next = NULL;
}

void 
insert_element(sl_list_t **head, int data)
{
	sl_list_t *temp_node =  NULL;

	if(*head == NULL) {
		*head = insert_data(data);		
	} else {
		//seeking last node in the list
		temp_node = *head;
		while(temp_node->next != NULL)
			temp_node = temp_node->next; 
		
		temp_node->next = insert_data(data);	
	}
}

void print_list(sl_list_t *head)
{
	sl_list_t * temp_node = head;
	int list_index = 0;
	if(head == NULL) {
		printf("No list found\n");	
		return;
	}
	while(temp_node != NULL)
	{
		printf("List[%d] = %d\n",list_index, temp_node->data);
		temp_node = temp_node->next;
		list_index++;
	}
	printf("\n");
}
void delete_list(sl_list_t **head)
{
	sl_list_t * temp_node = NULL;
	sl_list_t * next_node = NULL;

	if(*head == NULL) {
		printf("No Link list\n");
	    return ;	
	} else {
		temp_node = *head;
		while(temp_node != NULL)
		{
			next_node = temp_node->next;
			if(next_node == NULL)
				printf("Value in the last node= %d\n",temp_node->data);
			free(temp_node);
			temp_node = next_node;
		}
		*head = NULL;
	}
}

//HEAD->A->B->C->D->NULL
//HEAD->D->C->B->A->NULL

void reverse_list(sl_list_t **head)
{
	sl_list_t *prev = NULL, *current = NULL, *next = NULL;

	if(*head == NULL)
	{
		printf("No List\n");
		return;
	}
	else {
		current = *head;
		while(current != NULL)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		*head = prev;
	}
}

void find_data(sl_list_t* head, int data)
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
	sl_list_t *head = NULL;
	insert_element(&head, 5);
//	insert_element(&head, 6);
//	insert_element(&head, 7);
//	insert_element(&head, 8);
	print_list(head);
	reverse_list(&head);
//	delete_list(&head);
	print_list(head);
	
	reverse_list(&head);
	print_list(head);
	find_data(head,7);
	delete_list(&head);
}



