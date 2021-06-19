/*Write a program to take a input as a password
 * display only x's inplace of the character*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char *passwd;
	passwd=(char *)malloc(10);
	printf("Enter the password:");
	scanf("%s",passwd);
	while(*passwd != '\0')
	{
		if((*passwd >= 97 && *passwd <=122) || (*passwd >= 65 && *passwd <=90))
		{
			printf("x");
		}
		else
		{
			printf("%c",*passwd);
		}
		passwd++;
	}
	return 0;
}

