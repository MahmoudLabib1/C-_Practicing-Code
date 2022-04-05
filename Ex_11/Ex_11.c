/*******************************************************************************
 *
 * [Description]: Print sum of first 100 integers. (With data validation)
 *
 * [File Name]: Ex_11.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int data,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&data);

	for(int i=0 ; i<data ; i++){
		sum+=i;
	}
	printf("\nThe Sum of number %d is: %d\n",data,sum);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
