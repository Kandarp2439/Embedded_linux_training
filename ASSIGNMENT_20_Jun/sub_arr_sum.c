/*Write a program to find the maximum sum of the subarray*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int elements,*mem,sum,maxSum=0;
	printf("Enter the number of elements you want in array\n");
	scanf("%d",&elements);
	mem=(int*)malloc(elements*sizeof(int));
	if(mem==NULL)
	{
		printf("Memory is not allocated\n");
	}
	for(int i=0;i<elements;i++)
	{
		scanf("%d",(mem+i));
	}
	for(int i=0;i<elements;i++)
	{
		for(int j=i;j<elements; j++)
		{
			sum = 0;
			for(int k=i;k<j;k++)
			{
				sum=sum+mem[k];
			}
			if(sum>maxSum)
			{
				maxSum=sum;
			}
		}
	}
	printf("The largest sum of contiguous subarray is  %d \n",maxSum);
	for(int i=0;i<elements;i++)
	{
		printf("mem[%d]=%d\n",i,*(mem+i));
	}
	free(mem);
	return 0;
}

/*******************************OUTPUT************************************
kandarp@build0:~/RAMA/ASSIGNMENT_20$ ./a.out 
Enter the number of elements you want in array
5
8 4 3 -5 1
The largest sum of contiguous subarray is  15 
mem[0]=8
mem[1]=4
mem[2]=3
mem[3]=-5
mem[4]=1
*****************************************************************************/
