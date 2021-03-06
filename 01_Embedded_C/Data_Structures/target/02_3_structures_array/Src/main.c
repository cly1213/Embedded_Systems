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


struct shape{
	uint8_t type;
	int32_t x_coord;
	int32_t y_coord;
};

typedef struct shape shapeType;
/*
 1= rectangle
 2= square
 3= circle
 4= triangle
 */

int main(){

	shapeType shapes[5] ={
			{1, 5, -2},
			{3, 5, 6},
			{1, 8, -10},
			{2, 90, -8},
			{1, 2, 3},
	};

	for(uint8_t i = 0; i < 5; i++){

		printf("Shape %d  [x,y]: [%ld %ld]\r\n", i+1, shapes[i].x_coord, shapes[i].y_coord );

	}


	for(;;);




}
