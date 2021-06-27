/*Write a program for the matrix multiplication of the 2D array*/

#include<stdio.h>

#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2 

int main(void)
{
	int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2];
	int i,j,k;
	printf("Enter the matrix mat1 (%dx%d)row wise\n",ROW1,COL1);
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the matrix mat2 (%dx%d)row wise\n",ROW2,COL2);
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<COL1;k++)
			{
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("The resultant matrix mat3 is:\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/************************OUTPUT*******************************
kandarp@build0:~/RAMA/ASSIGNMENT_21$ ./a.out
Enter the matrix mat1 (3x4)row wise
2 1 4 3
5 2 7 1
3 1 4 2
Enter the matrix mat2 (4x2)row wise
1 2
3 4
2 5
6 2
The resultant matrix mat3 is:
   31   34
   31   55
   26   34
*****************************************************************/

