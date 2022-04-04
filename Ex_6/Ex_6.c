/*******************************************************************************
 *
 * [Description]: Write a program that print the relation between two
 *                integer number if those numbers are equal, not equal and
 *                which one contain the higher value
 *
 * [File Name]: Ex_6.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1,num2;
	printf("Enter Num1 : ");
	scanf("%d",&num1);
	printf("\rEnter Num2 : ");
	scanf("%d",&num2);

	if(num1 == num2){
		printf("\nNum1 and Num2 are equal\n");
	}
	else if(num1 < num2){
		printf("\nNum1 less than Num2\n");
	}
	else
	{
		printf("\nNum1 greater than Num2\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
