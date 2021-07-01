/*Write a program for the exclusive OR operation for the array*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int elements,*mem1,*mem2,var;
	printf("Enter the number of elements you want in array\n");
	scanf("%d",&elements);
	mem1=(int*)malloc(elements*sizeof(int));
	mem2=(int*)malloc(elements*sizeof(int));
	if(mem1==NULL || mem2==NULL)
	{
		printf("Memory is not allocated\n");
		return -1;
	}
	for(int i=0;i<elements;i++)
	{
		scanf("%d",(mem1+i));
	}
	var=mem1[0];
	for(int i=0;i<elements;i++)
	{
		var=var^mem1[i];
		mem2[i]=var;
	}
	for(int i=0;i<elements;i++)
	{
		printf("%d ",*(mem1+i));
	}
	printf("\n");
	for(int i=0;i<elements;i++)
	{
		printf("%d ",*(mem2+i));
	}
	printf("\n");
	free(mem1);
	free(mem2);
	return 0;
}
/***********************OUTPUT********************************************
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out 
Enter the number of elements you want in array
3
20 20 40
20 20 40 
0 20 60 
**************************************************************************/
