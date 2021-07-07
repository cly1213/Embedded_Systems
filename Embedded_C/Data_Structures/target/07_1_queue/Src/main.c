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

struct Queue{
	int front;
	int rear;
	int capacity;
	int size;
	int *array;
};

typedef struct Queue queueType;

queueType *queue_create(int capacity);
int queue_getSize(queueType *queue);
int queue_getFrontElement(queueType *queue);
int queue_getRearElement(queueType *queue);
int queue_isEmpty(queueType *queue);
int queue_isFull(queueType *queue);
void queue_enqueue(queueType *queue, int data);
int queue_dequeue(queueType *queue);
void queue_delete(queueType *queue);


int main(){

	queueType *values;
	values = queue_create(5);

	queue_enqueue(values, 7);
	queue_enqueue(values, 14);
	queue_enqueue(values, 21);
	queue_enqueue(values, 28);

	printf("Queue size is : %d \n\r", queue_getSize(values));
	printf("Front element is : %d \n\r", queue_getFrontElement(values));

	printf("Dequeue element is : %d \n\r", queue_dequeue(values));
	printf("Queue size is : %d \n\r", queue_getSize(values));


	for(;;);
}


queueType *queue_create(int capacity){

	queueType *queue = malloc(sizeof(queueType));

	if(!queue){
		printf("Memory error\n\r");

		return NULL;
	}

	queue->capacity = capacity;
	queue->front = -1;
	queue->rear = -1;
	queue->size = 0;

	queue->array = malloc(queue->capacity * sizeof(int));

	if(!queue->array){
		printf("Memory error\n\r");
		return NULL;
	}

	return queue;
}

int queue_getSize(queueType *queue){

	return queue->size;

}

int queue_getFrontElement(queueType *queue){

	return queue->array[queue->front];

}

int queue_getRearElement(queueType *queue){

	return queue->array[queue->rear];

}

int queue_isEmpty(queueType *queue){
	return (queue->size == 0);
}

int queue_isFull(queueType *queue){
	return (queue->size == queue->capacity);
}

void queue_enqueue(queueType *queue, int data){

	if(queue_isFull(queue)){
		printf("Queue is full\n\r");
	}
	else{
		queue->rear = (queue->rear+1) % queue->capacity;
		queue->array[queue->rear] = data;

		if(queue->front == -1){
			queue->front = queue->rear;
		}

		queue->size += 1;

	}

}

int queue_dequeue(queueType *queue){
	int data = -999;

	if(queue_isEmpty(queue)){
		printf("Queue is empty\n\r");
		//return NULL;
	}

	data = queue->array[queue->front];

	if(queue->front == queue->rear){

		queue->front = queue->rear = -1;
		queue->size = 0;
	}
	else{
		queue->front = (queue->front) % queue->capacity;
		queue->size -= 1;
	}

	return data;
}

void queue_delete(queueType *queue){
	if(queue){

		if(queue->array){
			free(queue->array);
		}

		free(queue);
	}
}


