/*Program to find the sum of digits of a number until the sum is reduce to a one digit*/

#include<stdio.h>
/*Function declaration*/
int sum_fun(int);
int main(void)
{
	int num=0,ret_val;
	printf("Enter the number:");
	scanf("%d",&num);
	ret_val=sum_fun(num);
        printf("Sum of digits is %d\n",ret_val);
	return 0;
}
/*Function definition*/
int sum_fun(int num)
{
	int sum=0;
	while(num !=0 )
	{
		sum+=(num%10);
		num/=10;

	}
	if(sum <= 9)
        {
              return sum;
        }
        else
        {
              return sum_fun(sum);

        }

}
