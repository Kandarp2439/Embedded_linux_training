/*Write a program to count the set bits*/

#include<stdio.h>
#define SIZE 32
int main(void)
{
	int num,arr[SIZE],i=0,count=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		arr[i]=num%2;
		num=num/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d ",arr[j]);
		if(arr[j]==1)
		{
			count++;
		}
	}
	printf("\n");
	printf("Count of the set bit is %d\n",count);
	return 0;
}
/********************OUTPUT************************************
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out
Enter the number
7
1 1 1
Count of the set bit is 3
***************************************************************/
