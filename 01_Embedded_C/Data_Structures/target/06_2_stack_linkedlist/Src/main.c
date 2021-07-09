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


struct Stack{
	int top;
	int capacity;
	int *array;
};

typedef struct Stack stackType;

struct Node{
	int data;
	struct Node *next;
}*top=NULL;

typedef struct Node nodeType;


stackType* stack_create(int capacity);
void stack_double_size(stackType *stack);
int stack_isFull(stackType *stack);
int stack_isEmpty(stackType *stack);
int stack_getSize(stackType *stack);
void stack_push(stackType *stack, int data);
int stack_pop(stackType *stack);
int stack_peek(stackType *stack);
void stack_delete(stackType *stack);

//linked list
void ll_stack_print(void);
int ll_stack_pop(void);
void ll_stack_push(int data);

int main(){

	ll_stack_push(7);
	ll_stack_push(14);
	ll_stack_push(28);

	printf("Stack content\n\r");
	ll_stack_print();

	ll_stack_pop();
	ll_stack_pop();


	printf("Popped tack content\n\r");
	ll_stack_print();



/*
	int capacity = 7;
	stackType *values = stack_create(capacity);

	for(int i = 0; i <= 2*capacity; i++){
		stack_push(values, (i*5));
	}
	//Test1
	printf("Top element is %d\n\r", stack_peek(values));
	printf("Stack size is %d\n\r", stack_getSize(values));

	printf("\n\r");

	for(int i = 0; i <= 2*capacity; i++){

		printf("Stack popped element is %d\n\r", stack_pop(values));

	}


	if(stack_isEmpty(values)){
		printf("Stack is empty\n\r");
	}
	else{
		printf("Stack is not empty\n\r");
	}



*/
	for(;;);

}


stackType* stack_create(int capacity){

	stackType *stack = malloc(sizeof(stackType));

	if(!stack){
		printf("Not able to create stack\n\r");
		return NULL;
	}

	stack->capacity = capacity;
	stack->top = -1;
	stack->array = malloc(stack->capacity * sizeof(int));

	if(!stack->array){
		printf("Not able to create stack of this size\n\r");
		return NULL;
	}

	return stack;
}


void stack_double_size(stackType *stack){

	stack->capacity *= 2;

	stack->array = realloc(stack->array, stack->capacity * sizeof(int));

}

int stack_isFull(stackType *stack){

	return (stack->top == (stack->capacity -1));

}

int stack_isEmpty(stackType *stack){

	return (stack->top ==  -1);

}

int stack_getSize(stackType *stack){

	return (stack->top +1);

}

void stack_push(stackType *stack, int data){

	if(stack_isFull(stack)){
		stack_double_size(stack);
	}

	stack->array[++stack->top] = data;
}

int stack_pop(stackType *stack){

	if(stack_isEmpty(stack)){
		printf("Stack is empty\r\n");

		return -999;
	}

	return (stack->array[stack->top--]);
}

int stack_peek(stackType *stack){

	if(stack_isEmpty(stack)){
		printf("Stack is empty\r\n");
		return -999;
	}

	return (stack->array[stack->top]);

}

void stack_delete(stackType *stack){

	if(stack){
		if(stack->array){
			free(stack->array);
		}

		free(stack);
	}

}

void ll_stack_push(int data){
	nodeType *newNode;
	newNode = (nodeType *)malloc(sizeof(nodeType));

	if(!newNode){
		printf("Stack error \n\r");
	}
	else{
		newNode->data = data;
		newNode->next = top;
		top = newNode;
	}

}


int ll_stack_pop(void){
	nodeType *temp;
	int popped_data = -999;

	if(top == NULL){
		printf("Stack is empty\n\r");
	}
	else{
		temp = top;
		top = top->next;
		popped_data = temp->data;

		free(temp);
	}

	return popped_data;
}

void ll_stack_print(void){
	nodeType *temp;

	temp = top;
	while(temp != NULL){
		printf("The stack element is : %d\n\r",temp->data);
		temp = temp->next;
	}
	printf("\r\n");
}




