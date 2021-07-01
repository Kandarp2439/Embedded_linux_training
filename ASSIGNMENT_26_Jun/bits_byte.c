/*Write a program to print the bits in to the character byte without using a bitwise operator(Union and Bitfied)*/


#include<stdio.h>
#include<stdint.h>
struct struct_Data
{
	uint8_t zero_bit:1;
	uint8_t first_bit:1;
	uint8_t second_bit:1;
	uint8_t third_bit:1;
	uint8_t fourth_bit:1;
	uint8_t fifth_bit:1;
	uint8_t sixth_bit:1;
	uint8_t seventh_bit:1;
};

union union_data
{
	uint8_t firstUnionData;
	struct struct_Data struct_Data_1;
};

int main(void)
{
	union union_data union_data_1;
	union_data_1.firstUnionData=0xAf;
	printf("Input data:0x%x\n",union_data_1.firstUnionData);
	printf("Zero_bit:%d\n First_bit:%d\n Second_bit:%d\n Third_bit:%d\n Fourth_bit:%d\n Fifth_bit:%d\n Sixth_bit:%d\n Seventh_bit:%d\n\n",union_data_1.struct_Data_1.zero_bit,union_data_1.struct_Data_1.first_bit,union_data_1.struct_Data_1.second_bit,union_data_1.struct_Data_1.third_bit,union_data_1.struct_Data_1.fourth_bit,union_data_1.struct_Data_1.fifth_bit,union_data_1.struct_Data_1.sixth_bit,union_data_1.struct_Data_1.seventh_bit);
	return 0;
}

/***************************OUTPUT****************************************
kandarp@build0:~/RAMA/ASSIGNMENT_26$ ./a.out 
Input data:0xaf
Zero_bit:1
 First_bit:1
 Second_bit:1
 Third_bit:1
 Fourth_bit:0
 Fifth_bit:1
 Sixth_bit:0
 Seventh_bit:1
****************************************************************************/

