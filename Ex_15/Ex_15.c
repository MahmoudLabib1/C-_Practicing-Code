/*******************************************************************************
 *
 * [Description]:  Write a program to display English alphabets from A to Z.
 *
 * [File Name]: Ex_15.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int clcPower(int num, int power){
	int result=1;
	while(power != 0){
		result *= num;
		--power;
	}

	return result;
}
int main(int argc, char *argv[])
{
	int num , power;
	printf("Enter the Number And Power\n");
	printf("Enter the Number :");
	scanf("%d",&num);
	printf("\nEnter the power : ");
	scanf("%d",&power);

	printf("\n The result is : %d\n",clcPower(num, power));

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
