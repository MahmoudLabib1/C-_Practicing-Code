/*******************************************************************************
 *
 * [Description]: Write a program to make a simple calculator using
 *                switch-case. The calculator takes the operation
 *                (+ or – or * or /) and takes the two input arguments and
 *                print the results
 *
 * [File Name]: Ex_10.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
double simple_clc(float num1 , float num2 , char operator){
	float result;
	switch(operator){
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;

	default:
		printf("ERROR! The operator Not Found Choose From (+,-,*,/)\n");
	}
	return result;
}
int main(int argc, char *argv[])
{
	printf("The result is : %f \n",simple_clc(5, 2, '*'));

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
