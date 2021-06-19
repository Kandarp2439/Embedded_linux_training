/*Execute the below code and give the output*/

#include<stdio.h>
int main(void)
{
	int x=10,y=3;
	{
		int x=100,z=10;
		printf("%d %d\n",x,z);
	}
	printf("%d %d\n",x,z);
	return 0;
}
