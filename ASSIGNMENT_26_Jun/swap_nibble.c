/*Write a program to swap a nibble in to the byte without using the bitwise operator*/

#include<stdio.h>
#define SIZE 8
int main(void)
{
	int arr[SIZE],temp,i,j;
	printf("Enter the byte\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0,j=SIZE-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0,j=(SIZE/2-1);i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("After swapping the nibble the byte is\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
/********************OUTPUT******************************
kandarp@build0:~/RAMA/ASSIGNMENT_26$ ./a.out
Enter the byte
0 1 1 0 1 1 1 0
After swapping the nibble the byte is
1 1 1 0 0 1 1 0
*********************************************************/

