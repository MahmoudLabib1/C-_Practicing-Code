/*******************************************************************************
 *
 * [Description]:  Write a program to print the ASCII value of a character
 *                 input by the user.
 *
 * [File Name]: Ex_5.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{

	char C;
	printf("Enter Character : ");
	scanf("%c",&C);
	printf("The ASCII of character '%c' is : %d\n",C,C);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
