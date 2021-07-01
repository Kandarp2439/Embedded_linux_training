/*Write a program to CLEAR,SET and TOGGLE using bitwise with the MACRO*/

#include<stdio.h>

void displayBits(int);

#define setbit(num,pos)(num |= (1<<pos-1))
#define clearbit(num,pos)(num &= (~(1<<pos-1)))
#define togglebit(num,pos)(num ^ (1<<pos-1))

int main(void)
{
	int num,pos;
	printf("Enter the number :\n");
	scanf("%d",&num);
	displayBits(num);
	printf("Enter the position for the set ,clear,toggle:\n");
	scanf("%d",&pos);
	setbit(num,pos);
	printf("Set the %d bit\n",pos);
	displayBits(num);
	clearbit(num,pos);
	printf("Clear the %d bit\n",pos);
        displayBits(num);
	togglebit(num,pos);
	printf("Toggle the %d bit\n",pos);
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
/********************************OUTPUT********************************
Enter the number :
7
0000 0111 
Enter the position for the set ,clear,toggle:
4
Set the 4 bit
0000 1111 
Clear the 4 bit
0000 0111 
**********************************************************************/
