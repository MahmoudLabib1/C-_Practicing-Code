/*******************************************************************************
 *
 * [Description]: Write a C Function that reads two integers and checks if the first is multiple of the second.
 *
 * [File Name]: Ex_24.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int num1, num2;
	printf("Please Enter The 1st Number : ");
	scanf("%d",&num1);

	printf("\nPlease Enter The 2nd Number : ");
	scanf("%d",&num2);

	if(num1%num2 == 0){
		printf("\nThe 1st number is multiple of the second\n");
	}
	else
	{
		printf("\nThe 1st number is NOT multiple of the second\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
