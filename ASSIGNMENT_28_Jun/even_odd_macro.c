/*Write a program with MACRO to find even or odd using the bitwise operator*/

#include<stdio.h>
#define check_num(num)(num & 0x1)
int main(void)
{
	int num,ret_val;
	printf("Enter the number to find even or odd\n");
	scanf("%d",&num);
	ret_val=check_num(num);
	if(ret_val==0)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	return 0;
}

/*************************OUTPUT***********************************
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out
Enter the number to find even or odd
4
Number is even
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out
Enter the number to find even or odd
3
Number is odd
********************************************************************/
