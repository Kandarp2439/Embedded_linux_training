/*Write a program to print Decimal to the binary using recursion*/

#include<stdio.h>
/*Function declaration*/
void dec_bin_function(int num);
int main(void)
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	dec_bin_function(num);
	printf("\n");
	return 0;
}
/*Function definition*/
void dec_bin_function(int num)
{
	int rem=num%2;
	if(num != 0)
	{
		dec_bin_function(num/2);
		printf("%d",rem);
	}
}

