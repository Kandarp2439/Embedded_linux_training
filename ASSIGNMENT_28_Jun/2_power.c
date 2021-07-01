/*Write a program to find the given number is 2's power or not*/

#include<stdio.h>
#define powerof2(num)(num & (num-1)) 
int main(void)
{
	int num;
	printf("Enter the num\n");
	scanf("%d",&num);
	if((num==0) || (powerof2(num)==0))
	{
		printf("The num is power of 2\n");
	}
	else
	{
		printf("The num is not power of 2\n");
	}
	return 0;
}
/****************************OUTPUT***************************
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out 
Enter the num
3
The num is not power of 2
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out 
Enter the num
4
The num is power of 2
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out 
Enter the num
6
The num is not power of 2
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out 
Enter the num
8
The num is power of 2
****************************************************************/
