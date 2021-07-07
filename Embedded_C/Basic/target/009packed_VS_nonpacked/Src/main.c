/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#include<stdio.h>

struct DataSet
{
	char  data1 ; //1 byte = 8 bits
	int   data2 ; //4 bytes
	char  data3 ; //1 byte = half word
	short data4 ; //2 bytes = 1 word
}__attribute__((packed));
;

/*
typedef struct
{
	char  data1 ;
	int   data2 ;
	char  data3 ;
	short data4 ;
}DateSet_t;



 */
//__attribute__((packed));
// unpacked => text = 5340
// packed => text = 5372



//use packed will increasing code size and decreasing performance

//STRB is an instruction to 'store a byte' into memory
//STR is an instruction to 'store a word' into memory


//STR divided into 4 STRB


struct DataSet data ; //this consumes 12 bytes in memory(RAM)
//DateSet_t data;

int main(void)
{

	data.data1 = 0xAA;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x55;
	data.data4 = 0xA5A5;

	printf("data.data1 = %d\n",data.data1);
	printf("data.data2 = %d\n",data.data2);
	printf("data.data3 = %d\n",data.data3);
	printf("data.data4 = %d\n",data.data4);

	for(;;);
}
