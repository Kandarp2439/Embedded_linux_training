/*Program to tranpose of 2D matrix*/

#include<stdio.h>
#define ROW 3
#define COL 4

int main(void)
{
	int mat1[ROW][COL],mat2[COL][ROW],i,j;
	printf("Enter the matrix mat1 (%dx%d) row wise \n",ROW,COL);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	for(i=0;i<COL;i++)
	{
		for(j=0;j<ROW;j++)
		{
			mat2[i][j]=mat1[j][i];
		}
	}
	printf("Tranpose of matrix is \n");
	for(i=0;i<COL;i++)
	{
		for(j=0;j<ROW;j++)
		{
			printf("%5d",mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/******************************OUTPUT****************************
kandarp@build0:~/RAMA/ASSIGNMENT_21$ ./a.out 
Enter the matrix mat1 (3x4) row wise 
3 2 1 5
6 5 8 2
9 3 4 1
Tranpose of matrix is 
    3    6    9
    2    5    3
    1    8    4
    5    2    1
******************************************************************/
