/*******************************************************************************
 *
 * [Description]: Write a program to display half pyramid using stars pattern.
 *
 * [File Name]: half pyramid.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int row,col,noOfRows;
	printf("Enter the Number Rows: ");
	scanf("%d",&noOfRows);

	for(row=1 ; row <= noOfRows ; row++){
		for(col=1 ; col <= row ; col++){
			printf("*");
		}
		printf("\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
