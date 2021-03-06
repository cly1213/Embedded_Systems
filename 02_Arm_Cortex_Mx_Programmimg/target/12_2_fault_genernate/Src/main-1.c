
/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include<stdint.h>
#include<stdio.h>


int main(void)
{
	//1. enable all configurable exceptions like usage fault, mem manage fault and bus fault
	uint32_t *pSHCSR = (uint32_t*)0xE000ED24;

	*pSHCSR |= ( 1 << 16); //mem manage
	*pSHCSR |= ( 1 << 17); //bus fault
	*pSHCSR |= ( 1 << 18); //usage fault

	//3. lets force the processor to execute some undefined instruction
	uint32_t *pSRAM = (uint32_t*)0x20010000;

	/*This is an undefined instruction value */
	*pSRAM = 0xFFFFFFFF;

	/* This is a function pointer variable */
	void (*some_address) (void);

	/* initialize  the function pointer variable to some address */
	some_address = (void*)0x20010001;

	/* change PC to jump to location 0x20010000 */
	some_address();

	//4. analyze the fault

	for(;;);
}

//2. implement the fault handlers
void HardFault_Handler(void)
{
	printf("Exception : HardFault\n");
	while(1);
}


void MemManage_Handler(void)
{
	printf("Exception : MemManage\n");
	while(1);
}

void BusFault_Handler(void)
{
	printf("Exception : BusFault\n");
	while(1);
}


void UsageFault_Handler(uint32_t *pBaseStackFrame)
{
	uint32_t *pUFSR = (uint32_t*)0xE000ED2A;
	printf("Exception : UsageFault\n");
	printf("UFSR = %lx\n",(*pUFSR) & 0xFFFF);

	while(1);
}

