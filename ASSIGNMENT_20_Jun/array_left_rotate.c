/*Left rotate of an array up to the user's choice*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int elements,*mem,rotate_var,initial_val;
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
	printf("Enter the rotate varibale value\n");
	scanf("%d",&rotate_var);
	while(rotate_var--)
	{
		initial_val=mem[0];
		for(int i=0;i<elements-1;i++)
		{
			mem[i]=mem[i+1];
		}
		mem[elements-1]=initial_val;
	}
	for(int i=0;i<elements;i++)
	{
		printf("mem[%d]=%d\n",i,*(mem+i));
	}
	free(mem);
	return 0;
}
/******************************OUTPUT*********************************
kandarp@build0:~/RAMA/ASSIGNMENT_20$ ./a.out
Enter the number of elements you want in array
6
1 2 3 4 5 6
Enter the rotate varibale value
3
mem[0]=4
mem[1]=5
mem[2]=6
mem[3]=1
mem[4]=2
mem[5]=3
***********************************************************************/
