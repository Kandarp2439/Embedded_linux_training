/*Write a C program for string length,string copy and string comparison(without using the inbuilt function*/

#include<stdio.h>
#include<string.h>

char *astrcpy(char *dest, const char *src)
{
	char *tmp = dest;

	while ((*dest++ = *src++) != '\0')
		/* nothing */;
	return tmp;
}

size_t astrlen(const char *s)
{
	const char *sc;

	for (sc = s; *sc != '\0'; ++sc)
		/* nothing */;
	return sc - s;
}
int astrcmp(const char *cs, const char *ct)
{
	unsigned char c1, c2;

	while (1) 
	{
		c1 = *cs++;
		c2 = *ct++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}

int main(void)
{
	char str1[10],str2[10],str3[10];
	int ret_val;
	printf("Enter the two string:\n");
	gets(str1);
	gets(str2);
	/*strcmp function call*/
	if(astrcmp(str1,str2)==0)
	{
		printf("Both the strings are same\n");
	}
	else
	{
		printf("Both the strings are not equal\n");
	}
	/*strlen function call*/
	ret_val= astrlen(str1);
	printf("String length is %d\n",ret_val);
	/*strcpy function call*/
	astrcpy(str2,str1);
	printf("After strcpy output of str2 is %s\n",str2);
	return 0;
}

/***********************************OUTPUT_STRCMP********************************
kandarp@build0:~/RAMA/ASSIGNMENT_24$ ./a.out 
Enter the two string:
kandarp  
joshi
Both the strings are not equal
String length is 7
After strcpy output of str2 is kandarp
*********************************************************************************/
