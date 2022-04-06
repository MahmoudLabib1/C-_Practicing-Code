/*******************************************************************************
 *
 * [Description]: Write a program to display a X-shape using stars pattern.
 *
 * [File Name]: X-shape.c
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

		for(col=1 ; col <= noOfRows ; col++){

			if((col == row) || (col == (noOfRows-row+1))){
				printf(" *");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}


	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
