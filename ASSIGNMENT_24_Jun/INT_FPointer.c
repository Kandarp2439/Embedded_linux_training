/*Simulate the interrupt using the function pointer*/

#include<stdio.h>
void i2c_interrupt(void)
{
	printf("I2C interrupt..\n");
}
void usb_interrupt(void)
{
	printf("USB interrupt..\n");
}
int main(void)
{
	/*Function pointer*/
	void (*func_ptr)(void);
	while(1)
	{
		func_ptr=i2c_interrupt;
		func_ptr();
		sleep(1);
		func_ptr=usb_interrupt;
		func_ptr();
	}
	return 0;
}
