/*******************************************************************************
 *
 * [Description]: In this challenge write a function to add two floating numbers.
 *                Determine the integer floor of the sum. The floor is the truncated float
 *                value, anything after the decimal point is dropped. For instance
 *                floor(1.1+3.05)=floor(4.15)=4
 *
 * [File Name]: Ex_28.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int sumNmbers(float number1 , float number2){

	return  (int)(number1 + number2);
}

int main(int argc, char *argv[])
{
	float num1,num2;
	printf("Please Enter The 1st Number : ");
	scanf(" %f",&num1);

	printf("\nPlease Enter The 2nd Number : ");
	scanf("%f",&num2);

	printf("\nThe Sum of Two numbers is : %d \n",sumNmbers(num1, num2));

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
