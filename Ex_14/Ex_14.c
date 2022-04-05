/*******************************************************************************
 *
 * [Description]:  Write a program to display English alphabets from A to Z.
 *
 * [File Name]: Ex_14.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
/*char alphabets;*/
	printf("The English alphabets is : ");
	for(int i=65 ; i<=90 ; i++){
		printf("%c ",i);
	}
	printf("\n");
	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
