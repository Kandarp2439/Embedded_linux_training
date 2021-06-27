/*Write a program to swap the string by using swapping pointer and also write a program for swaping the data.*/

#include<stdio.h>
#include<string.h>

/*Swaping the string*/
void swap_str(char** str1,char** str2)
{
	char *temp[10];
	
	*temp=*str1;
	*str1=*str2;
	*str2=*temp;
	return;
}
void swap_data(int* data1,int* data2)
{
	int temp;
	temp=*data1;
	*data1=*data2;
	*data2=temp;
	return ;
}
int main(void)
{
	char *str1,*str2;
	int data1,data2;
	str1="Kandarp";
	str2="Joshi";
	data1=10;
	data2=20;
	swap_str(&str1,&str2);
	swap_data(&data1,&data2);
	printf("After the swapping the string1 is %s and string2 is %s\n",str1,str2);
	printf("After the swapping the data1 is %d and data2 is %d\n",data1,data2);
	return 0;
}

/***************************************************************
kandarp@build0:~/RAMA/ASSIGNMENT_24$ ./a.out
After the swapping the string1 is Joshi and string2 is Kandarp
After the swapping the data1 is 20 and data2 is 10
****************************************************************/

