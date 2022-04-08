/*******************************************************************************
 *
 * [Description]: Write a C function that returns 1 if the input number is a power of 2
 *                and return 0 if the input number is not power of 2.
 *                For example: 1, 2 and 16 are power of 2.
 *                0, 10 and 30 are not power of 2.
 *
 * [File Name]: Ex_27.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define TRUE           1
#define FALSE          0
int isPowerOf2(int number){

	if(number == 0){
		return FALSE;
	}
	else if(number == 1){
		return TRUE;
	}
	else{
		while(TRUE){
			if(number%2 == 0){

			if(number == 2){
				return TRUE;
			}
			number /=2;
			}
			else
			{
				return FALSE;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	int num ,result;
	printf("Please Enter The Number : ");
	scanf("%d",&num);

	result= isPowerOf2(num);
	if(result == TRUE){
		printf("\nThe number %d is powered of 2 \n",num);
	}
	else
	{
		printf("\nThe number %d is NOT powered of 2 \n",num);
	}

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
