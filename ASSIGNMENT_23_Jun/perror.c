#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<fcntl.h>
int main(void)
{
	int errno;
	int fd = open("/etc/paswd", O_RDONLY | O_CREAT);
	if (fd == -1) 
	{
    		perror("open");
		printf( "Value of errno: %d\n", errno );
    		exit(1);
	}
	return 0;	
}

/******************OUTPUT***************************
kandarp@build0:~/RAMA/ASSIGNMENT_23$ ./a.out
open: Permission denied
Value of errno: 13
***************************************************/

