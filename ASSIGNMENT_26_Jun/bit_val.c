/*Write a program as a MACRO will take two argument and it should return a position 1 or 0*/

#include<stdio.h>
#define BITVAL(num,pos)((num>>pos)&1)
void displayBits(int);
int main(void)
{
	int num,pos,ret;
	printf("Enter the number\n");
	scanf("%d",&num);
	displayBits(num);
	printf("Enter the position of the bit you want\n");
	scanf("%d",&pos);
	ret=BITVAL(num,pos);
	printf("Bit value at the position %d is %d\n",pos,ret);
	return 0;
}
void displayBits(int num)
{
        int i,mask;
        for(i=7;i>=0;i--)
        {
                mask=1<<i;
                if((num&mask))
                {
                        printf("1");
                }
                else
                {
                        printf("0");
                }
                if(i%4==0)
                {
                        printf(" ");
                }
        }
        printf("\n");
        return;
}
/**********************************OUTPUT******************************
Enter the number
7
0000 0111 
Enter the position of the bit you want
3
Bit value at the position 3 is 0

Enter the number
7
0000 0111 
Enter the position of the bit you want
0
Bit value at the position 0 is 1
*************************************************************************/

