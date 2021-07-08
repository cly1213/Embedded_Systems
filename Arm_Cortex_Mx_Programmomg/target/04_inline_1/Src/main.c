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

int main(void)
{
#if 0
	__asm volatile("LDR R1,=#0x20001000");
	__asm volatile("LDR R2,=#0x20001004");
	__asm volatile("LDR R0,[R1]");
	__asm volatile("LDR R1,[R2]");
	__asm volatile("ADD R0,R0,R1");
	__asm volatile("STR R0,[R2]");
#endif

	/* store 'val' in to R0*/
	int val = 50;
	 //ARM GCC compiler.
	__asm volatile("MOV R0,%0": :"r"(val)); //'r' is a constant character, %0 is first operand
	//__asm volatile("MOV R0,%0": :"i"(0x50)); //immediately use

	/*read CONTROL register value in to control_reg variable */
	int control_reg;
	__asm volatile("MRS %0,CONTROL": "=r"(control_reg)); //only output operand
	//__asm volatile("MRS %0,CONTROL": "=r"(control_reg)::);

	//MRS: Move from special register to register
	//MSR: Move from register to special register


    /* Read the value present at pointer p2 in to p1 */
	int p1, *p2;
	
	p2 = (int*)0x20000008;

	__asm volatile("LDR %0,[%1]": "=r"(p1): "r"(p2)); //p1 = *p2


	for(;;);
}