/*******************************************************************************
 *
 * [Description]: Write a C function to check if the input is an even number or an odd
 *                number, if even number return 0 if odd number return 1.
 * [Example]:
 *           Input 7, Output = 1 (Odd)
 *           Input 6, Output = 0 (Even)
 *
 * [File Name]: Ex_22.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>


int Check_evenORodd(int num){
	if(num %2 == 0){
		return 0;
	}
	else
	{
		return 1;
	}
}

int main(int argc, char *argv[])
{
	int num ;
	printf("Enter The Number To check odd OR even : ");
	scanf(" %d",&num);

	if(Check_evenORodd(num) == 1){
		printf("\nThe number is Odd\n");
	}
	else
	{
		printf("\nThe number is Even\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
