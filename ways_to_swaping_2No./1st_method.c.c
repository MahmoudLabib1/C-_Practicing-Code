/*******************************************************************************
 *
 * [Description]: Write a C Function that swaps the value of two integer numbers.
 *
 * [File Name]: 1st_method.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void swapNumber(int *number1 ,int *number2){
	int temp;

	temp= *number1;
	*number1= *number2;
	*number2 = temp;
}

int main(int argc, char *argv[])
{
	int num1, num2;
	printf("Please Enter The 1st Number : ");
	scanf("%d",&num1);

	printf("\nPlease Enter The 2nd Number : ");
	scanf("%d",&num2);

	printf("\nYou Enter 1st No. is : %d\n",num1);
	printf("\nYou Enter 2nd No. is : %d\n",num2);

	swapNumber(&num1,&num2);

	printf("\nAfter Swaping 1st No. Equal : %d\n",num1);
	printf("\nAfter Swaping 2nd No. Equal : %d\n",num2);

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}

