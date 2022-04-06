/*******************************************************************************
 *
 * [Description]:  Write a C Function that prints the cube of any number.
 *
 * [File Name]: Ex_18.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int clcCubeNum(int num1){
	return (num1*num1*num1);
}

int main(int argc, char *argv[])
{
	int num;

	printf("Enter the Number To clc cube: ");
	scanf("%d",&num);
	printf("\nThe Cube of Number is: %d \n",clcCubeNum(num));


	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
