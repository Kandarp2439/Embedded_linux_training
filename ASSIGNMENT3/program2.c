/*Execute the line and find the output*/

#include<stdio.h>
int main(void)
{
	int a=2;
	int b=1;
	printf("Output of X is %d\n",(a++ && (!b) && b || ++a));
	return 0;
}
