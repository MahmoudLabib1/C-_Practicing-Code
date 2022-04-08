/*******************************************************************************
 *
 * [Description]: Write a C Function that calculate the Fibonacci series using recursive method.
 *                The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
 *
 * [File Name]: Ex_29.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if(n == 0 || n == 1){
		return n;
	}
	else
	{
		return  fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(int argc, char *argv[])
{
	int num;
	printf("Please Enter The Number To calculate fibonacci : ");
	scanf("%d",&num);

	printf("\nThe Result is : %d \n",fibonacci(num));

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
