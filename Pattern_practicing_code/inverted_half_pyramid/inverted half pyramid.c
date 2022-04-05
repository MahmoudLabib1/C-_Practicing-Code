/*******************************************************************************
 *
 * [Description]: Write a program to display inverted half pyramid using stars pattern.
 *
 * [File Name]: inverted half pyramid.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int row,col,noOfRows,noOfCols;
	printf("Enter the Number Rows: ");
	scanf("%d",&noOfRows);

	printf("\nEnter the Number Cols: ");
	scanf("%d",&noOfCols);

	for(row=0 ; row < noOfRows ; row++){
		for(col=1 ; col <= (noOfCols-row) ; col++){
			printf("*");
		}
		printf("\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
