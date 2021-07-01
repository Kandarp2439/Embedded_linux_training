/*Write a macro to get the bit and set the bit*/

#include<stdio.h>

void displayBits(int);

#define GETBIT(num,pos)((num>>pos)&1)
#define SETBIT(num,pos)(num |= (1<<pos))

int main(void)
{
	int num,pos,ret;
	printf("Enter the number\n");
	scanf("%d",&num);
	displayBits(num);
	printf("Enter the position you want to get\n");
	scanf("%d",&pos);
	ret=GETBIT(num,pos);
	printf("Bit value at position %d is %d\n",pos,ret);
	printf("Enter the bit position that you want to set\n");
	scanf("%d",&pos);
	printf("Set the %d bit\n",pos);
	SETBIT(num,pos);
	displayBits(num);
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

/************************OUTPUT**********************************
kandarp@build0:~/RAMA/ASSIGNMENT_28$ ./a.out 
Enter the number
4
0000 0100 
Enter the position you want to get
2
Bit value at position 2 is 1
Enter the bit position that you want to set
1
Set the 1 bit
0000 0110 
*****************************************************************/
