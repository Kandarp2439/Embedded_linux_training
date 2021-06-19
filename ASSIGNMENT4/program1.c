/*Write a program to print N to 1 using recursion and draw the diagram*/

#include<stdio.h>
/*Function declaration*/
void rec_print_function(int num);
int main(void)
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	rec_print_function(num);
	printf("\n");
	return 0;
}
/*Function definition*/
void rec_print_function(int num)
{
	if(num != 0)
	{
		printf("%d ",num);
		rec_print_function(num-1);
	}
}

