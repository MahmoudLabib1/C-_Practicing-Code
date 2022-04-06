/*******************************************************************************
 *
 * [Description]: Write a program to display a full pyramid using stars pattern.
 *
 * [File Name]: full pyramid.c
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
	int  FIRST_ENTER =1;

	printf("Enter the Number Rows: ");
	scanf("%d",&noOfRows);


	for(row=1 ; row <= noOfRows ; row++){

		for(col=1 ; col <= (noOfRows-row) ; col++){
			printf(" ");
		}

		for(col=1 ; col <= (row+row-1) ; col++){
			if(FIRST_ENTER == 1){
				printf("*");
				FIRST_ENTER =0;
				continue;
			}
			else
			{
				printf("*");
			}

		}

		for(col=1 ; col <= (noOfRows-row) ; col++){

			printf(" ");
		}
		printf("\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
