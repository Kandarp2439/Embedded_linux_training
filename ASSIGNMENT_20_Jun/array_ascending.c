/*Check wether the array is sorted in ascending order or not*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int elements,*mem,counter=1;
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
		if(mem[i] < mem[i+1])
		{
			counter++;
		}

	}
	printf("Counter is %d\n",counter);
	if(counter==elements)
	{
		printf("Array is in to the ascending order\n");
	}
	
	for(int i=0;i<elements;i++)
	{
		printf("mem[%d]=%d\n",i,*(mem+i));
	}
	free(mem);
	return 0;
}

/*****************************OUTPUT*******************************************
Enter the number of elements you want in array
5
1 2 3 4 5
Counter is 5
Array is in to the ascending order
mem[0]=1
mem[1]=2
mem[2]=3
mem[3]=4
mem[4]=5
*******************************************************************************/





