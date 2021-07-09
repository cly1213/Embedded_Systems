/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


struct dll_node{
	int data;
	struct dll_node *prev;
	struct dll_node *next;
};

typedef struct dll_node dll_nodeType;

int d_linkedlist_length(dll_nodeType *head);
void d_linkedlist_print_list(dll_nodeType *head);
void d_linked_list_insert_at_start(dll_nodeType **head, int data);
void d_linked_list_insert_at_end(dll_nodeType **head, int data);
void d_linked_list_insert_at_position(dll_nodeType **head, int data, int position);


int main(void){

	dll_nodeType *head = NULL;
	d_linked_list_insert_at_start(&head, 21);
	d_linked_list_insert_at_start(&head, 14);
	d_linked_list_insert_at_start(&head, 7);

	d_linked_list_insert_at_end(&head, 28);

	d_linked_list_insert_at_position(&head, 99, 1);

	printf("\r\n");

	d_linkedlist_print_list(head);


	for(;;);

}

int d_linkedlist_length(dll_nodeType *head){

	dll_nodeType *current = head;
	uint32_t len = 0;

	if(current == NULL){
		return 0;
	}

	while(current != NULL){
		current = current->next;
		len++;
	}

	return len;
}

void d_linkedlist_print_list(dll_nodeType *head){

	dll_nodeType *current = head;

	if(current == NULL){
		return;
	}

	while(current != NULL){
		printf("%d -->", current->data);
		current = current->next;
	}
	printf("NULL\n");

}



void d_linked_list_insert_at_start(dll_nodeType **head, int data){

	dll_nodeType *current = *head;
	dll_nodeType *new_node = (dll_nodeType *)malloc(sizeof(dll_nodeType));

	if(!new_node){
		printf("Error memory");
	}

	new_node->prev = NULL;
	new_node->data = data;
	new_node->next = NULL;

	if(*head == NULL){
		*head = new_node;
		return;
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;


	//No need to traverse
	/*
	while(current->next != NULL){
		current = current->next;
	}
	*/
}

void d_linked_list_insert_at_end(dll_nodeType **head, int data){

	dll_nodeType *current = *head;
	dll_nodeType *new_node = (dll_nodeType *)malloc(sizeof(dll_nodeType));

	if(!new_node){
		printf("Memory error!");
		return;
	}

	new_node->prev = NULL;
	new_node->data = data;
	new_node->next = NULL;

	if(*head == NULL){
		*head = new_node;
		return;
	}

	//traverse
	while(current->next != NULL){
		current = current->next;
	}

	new_node->prev = current;
	current->next = new_node;

}

void d_linked_list_insert_at_position(dll_nodeType **head, int data, int position){

	dll_nodeType *current = *head;
	dll_nodeType *new_node = (dll_nodeType *)malloc(sizeof(dll_nodeType));

	if(!new_node){
			printf("Memory error!");
			return;
	}

	new_node->prev = NULL;
	new_node->data = data;
	new_node->next = NULL;

	if(position == 1){
		new_node->next = *head;
		new_node->prev = NULL;

		if(*head){
			(*head)->prev = new_node;
		}

		*head = new_node;
		return;
	}

	int k=1;

	while((k < position-1) && (current->next != NULL)){
		current = current->next;
		k++;
	}

	if(k < position-1 ){
		printf("Invalid position passed to the function.");
		return;
	}

	new_node->next = current->next;
	new_node->prev = current;

	if(current->next){
		current->next->prev = new_node;
	}

	current->next = new_node;

	return;

}
