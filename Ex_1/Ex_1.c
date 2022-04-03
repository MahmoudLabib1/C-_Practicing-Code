/*******************************************************************************
 *
 * [Description]: Write a program that take two integers from the user
 *                and print the results of this equation.
 *            -------> Result = ((num1 + num2) * 3) – 10 <--------
 *
 * [File Name]: Ex_1.c
 *
 * [Difficulty]: Basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/



#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1,num2;
	int result;
	printf("Enter The 1st Number:  ");
	scanf("%d",&num1);
	printf("\nEnter The 2nd Number:  ");
	scanf("%d",&num2);

	result=(((num1+num2)*3)-10);
	printf("The Result is :%d\n",result);
	system("pause"); //To make the terminal not closed after executing the code
	return 0;
}
