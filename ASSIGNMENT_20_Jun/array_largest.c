/*Find the second largest number in the array*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int elements,*mem,var;
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
	for (int i=0;i<elements;++i)
	{
		for (int j=i+1;j<elements;++j)
		{
			if (mem[i] > mem[j])
			{
				var=mem[i];
				mem[i]=mem[j];
				mem[j]=var;
			}
		}
	}
	printf("The second largest element is %d \n",*(mem+(elements-2)));
#if 0
	for(int i=0;i<elements;i++)
        {
                printf("%d",*(mem+i));
        }
#endif
	free(mem);
	return 0;
}



/******************************OUTPUT*****************************************
kandarp@build0:~/RAMA/ASSIGNMENT_20$ ./a.out
Enter the number of elements you want in array
10
1 4 3 2 6 5 4 8 9 3
The second largest element is 8
*****************************************************************************/

