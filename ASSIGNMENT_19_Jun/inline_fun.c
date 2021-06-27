/*Write a simple C program to demostrate the inline function advantage over MACRO*/

#include <stdio.h>

#define DEBUG_LOG(fmt, args...) printf(fmt, ##args);
#define MAC1INT 0
#define SQUARE(X) ((X) * (X))

void square_fun_macro(int num);

static inline void square_fun_inline(int num)
{
	printf("Square of %d is %d\n",num,num * num);
}

int main(void) 
{
	__uint8_t int_var=1,num=4;
#ifdef MAC1INT 
	DEBUG_LOG("%d %s", int_var, "Sample macro\n");
#else
	DEBUG_LOG("%s","Sample string macro\n");
#endif
	square_fun_macro(num);
	square_fun_inline(num);
	return 0;
}

void square_fun_macro(int num)
{
	printf("Square of %d is %d\n",++num,SQUARE(++num)); 
	return ;
}


/****************************OUTPUT**************************************
kandarp@build0:~/RAMA/ASSIGNMENT_19$ ./a.out 
1 Sample macro
Square of 7 is 36
Square of 4 is 16
*************************************************************************/




