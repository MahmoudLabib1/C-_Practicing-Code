/*******************************************************************************
 *
 * [Description]: Write a program that takes three integers, and prints
 *                out the smallest number
 *
 * [File Name]: Ex_7.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num1,num2 ,num3,smallest;
	printf("Enter Num1 : ");
	scanf("%d",&num1);
	printf("\rEnter Num2 : ");
	scanf("%d",&num2);
	printf("\rEnter Num3 : ");
	scanf("%d",&num3);
	smallest = num1;

	if(num2 <= smallest)
	{
		smallest =num2;
	}
	if(num3 <= smallest)
	{
		smallest =num3;
	}
	else
	{
		smallest =num1;
	}

	printf("\nThe Smallest Number Is : %d\n",smallest);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
