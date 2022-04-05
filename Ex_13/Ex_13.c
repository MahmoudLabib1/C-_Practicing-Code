/*******************************************************************************
 *
 * [Description]:  Write a program that reads a positive integer and
 *                 checks if it is a prime.
 *
 * [File Name]: Ex_13.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#define TRUE   1
#define FALSE  0
int main(int argc, char *argv[])
{
	int num;
	int isPrime=TRUE;
	printf("Enter the Number to check prime or not : ");
	scanf("%d",&num);

	if(num == 1 || num == 0){

		isPrime=FALSE;
	}

	for(int i=2 ; i<=(num/2) ; i++){
		if(num%i == 0){
			isPrime=FALSE;
		}
	}

	if(isPrime == TRUE){
		printf("\nthe Number %d is prime\n",num);
	}
	else
	{
		printf("\nthe Number %d is not prime\n",num);
	}
	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
