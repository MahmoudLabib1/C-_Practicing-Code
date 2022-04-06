/*******************************************************************************
 *
 * [Description]: Write a C Function that check if the number if positive or negative.
 *
 * [File Name]: Ex_20.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

void Check_sign(int number){
	int check=(number >=0)-(number < 0);
	if(check == 1){
		printf("\nThe Number Is Positive\n");
	}
	else
	{
		printf("\nThe Number Is Negative \n");
	}
}

int main(int argc, char *argv[])
{
	int num;

	printf("Please enter the Number to check sign : ");
	scanf("%d",&num);
	Check_sign(num);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
