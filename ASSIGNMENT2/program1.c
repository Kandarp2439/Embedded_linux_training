/* Write a simple program for the nested comments.
 * What is the error and how to resolve it?*/

#include<stdio.h>
int main(void)
{
#if 0
	/*character variable to store a name
	char name[10];
	/*Enter the name
	printf("Enter the name:");
	scanf("%s",name);
	*/
	*/
#endif
	char name[10];
	printf("Enter the name:");
        scanf("%s",name);
	char *str;
	str=name;
	while(*str != '\0')
	{
		printf("%c",*str);
		str++;
	}
	printf("\n");
	return 0;
}

