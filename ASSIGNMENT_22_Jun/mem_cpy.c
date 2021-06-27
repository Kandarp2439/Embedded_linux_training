/*Write a C program for the memcpy operation with the pointers*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10

int main(void)
{
	char buffer[MAX_SIZE];
	printf("Enter the buffer data\n");
	scanf("%s",buffer);
	printf("Buffer data is %s\n",buffer);
	char *ptr=NULL;
	ptr=(char*)malloc(sizeof(buffer));
	memset(ptr,0,sizeof(buffer));
	memcpy(ptr,buffer,MAX_SIZE);
	printf("Pointer data is %s\n",ptr);
	return 0;
}

/*********************OUTPUT********************************
kandarp@build0:~/RAMA/ASSIGNMENT_20$ ./a.out
Enter the buffer data
kandarp
Buffer data is kandarp
Pointer data is kandarp
************************************************************/
