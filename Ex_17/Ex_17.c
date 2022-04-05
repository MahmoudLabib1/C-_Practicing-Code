/*******************************************************************************
 *
 * [Description]: Write a program to count number of digits in a decimal number.
 *
 * [File Name]: Ex_17.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int num,count=0;
	printf("Enter the Number to clc no. of digits\n");
	printf("Enter the Number :");
	scanf("%d",&num);

	while(num != 0){
		num/=10;
		++count;
	}

	printf("\n The number of digits is : %d\n",count);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
