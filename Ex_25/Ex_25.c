/*******************************************************************************
 *
 * [Description]: Write a C Function that display Prime Numbers between Intervals (two numbers) by Making Function.
 *
 * [File Name]: Ex_25.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void print_prime(int number1 ,int number2){
	int isPrime=1,i,j;

	for(i=number1 ; i <= number2 ; i++){
		if (i == 0 || i == 1)
			continue;
		for(j=2 ; j<=(i/2) ; j++){
			if(i%j == 0){
				isPrime=0;
				break;
			}
		}

		if(isPrime == 1){
			printf("\nThe Number %d is prime between [%d,%d]\n",i,number1,number2);
		}
		else
		{
			printf("\nThe Number %d is NOT prime between [%d,%d]\n",i,number1,number2);
			isPrime=1;
		}

	}
}

int main(int argc, char *argv[])
{
	int num1, num2;
	printf("Please Enter The 1st Number : ");
	scanf("%d",&num1);

	printf("\nPlease Enter The 2nd Number : ");
	scanf("%d",&num2);

	print_prime(num1,num2);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}

