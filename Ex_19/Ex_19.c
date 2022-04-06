/*******************************************************************************
 *
 * [Description]: Write a C Function that takes one character and checks if it alphabet
 *                or not.
 *
 * [File Name]: Ex_19.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

void Check_alphabet(char character){
	if(((character >= 'A') && (character <= 'Z')) || ((character >= 'a') && (character <= 'z')) ){
		printf("\nThe Character is alphabet \n");
	}
	else
	{
		printf("\nThe Character is not alphabet \n");
	}
}

int main(int argc, char *argv[])
{
	char character;

	printf("Please enter the character : ");
	scanf("%c",&character);
	Check_alphabet(character);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
