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

struct screen{
	shapeType shapes[2];
	uint32_t height;
	uint32_t weight;
};

typedef struct screen screenType;

int main(){

	screenType homescreen;
	homescreen.shapes[0].type =1;
	homescreen.shapes[0].x_coord = -10;
	homescreen.shapes[0].y_coord = 15;

	homescreen.shapes[1].type =2;
	homescreen.shapes[1].x_coord = -30;
	homescreen.shapes[1].y_coord = 25;

	homescreen.height = 300;
	homescreen.weight = 500;


	printf("The height of the screen is %ld \r\n", homescreen.height );


	for(;;);




}
