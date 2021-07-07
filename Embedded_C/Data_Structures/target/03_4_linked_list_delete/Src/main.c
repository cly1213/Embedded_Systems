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

struct node{
	int data;
	struct node *next;
};

typedef struct node nodeType;

uint8_t linkedlist_create(int32_t * arr, uint32_t arr_len);
uint32_t linkedlist_length(nodeType * l_list);
uint8_t linkedlist_insert(nodeType * l_list, uint32_t idx, int32_t elem);
int32_t linkedlist_delete(nodeType * l_list, uint32_t idx);

nodeType *head;

int main(){

	int32_t task_pri[] = {1,2,3,4,5,6,7};
	linkedlist_create(task_pri,7);//1,2,3,4,5,6,7

	//linkedlist_insert(head,1, 3); //1,3,2,3,4,5,6,7

	linkedlist_delete(head, 3);

	printf("Priority list content is:");

	while(head != NULL){
		printf(" %d ", head->data);
		head = head->next;
	}
	printf("\n");

	for(;;);

}

uint8_t linkedlist_create(int32_t * arr, uint32_t arr_len){
	nodeType *last, *temp;

	head = (nodeType *)malloc(sizeof(nodeType));

	if(!head){
		return 0; //Low system memory
	}

	head->data = arr[0];
	head->next = NULL;
	last = head;

	for(int i=1; i<arr_len;i++){
		temp = (nodeType *)malloc(sizeof(nodeType));

		if(!temp){
			return 0; //Low system memory
		}

		temp->data = arr[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}

	return 1;

}

uint32_t linkedlist_length(nodeType * l_list){
	uint32_t len = 0;

	while(l_list){
		len++;
		l_list = l_list->next;
	}

	return len;
}

uint8_t linkedlist_insert(nodeType * l_list, uint32_t idx, int32_t elem){
	nodeType *temp;

	if(idx > linkedlist_length(l_list)){
		return 0;
	}

	temp = (nodeType *)malloc(sizeof(nodeType));
	temp->data = elem;

	//Insertion at the beginning
	if(idx == 0){
		temp->next = l_list;
		l_list = temp;
	}

	else{
		for(int i = 0; i < idx-1; i++){
			l_list = l_list->next;
		}

		temp->next = l_list->next;
		l_list->next = temp;
	}

	return 1;
}

int32_t linkedlist_delete(nodeType * l_list, uint32_t idx){
	nodeType *temp;
	int32_t del;

	if(idx < 1 || idx > linkedlist_length(l_list)){
			return 0;
	}

	if(idx == 1){
		temp = head;
		del = head->data;
		head = head->next;
		free(temp);
		return del;
	}

	else{
		for(int i = 0; i < idx-1; i++){
			temp = l_list;
			l_list = l_list->next;
		}

		temp->next = l_list->next;
		del = l_list->data;
		free(l_list);

		return del;
	}
}















