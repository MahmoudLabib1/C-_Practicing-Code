/*******************************************************************************
 *
 * [Description]: Write a program that reads a positive integer and
 *                computes the factorial.
 *
 * [File Name]: Ex_12.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int num,factorial=1;
	printf("Enter the Number to clc factorial : ");
	scanf("%d",&num);

	if(num >=0 ){
		for(int i=1 ; i<=num ; i++){
			factorial *=i;
		}
		printf("\nThe factorial of number %d is: %d\n",num,factorial);
	}
	else
	{
		printf("\nERROR! The number Negative Enter Positive number\n");
	}


	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
