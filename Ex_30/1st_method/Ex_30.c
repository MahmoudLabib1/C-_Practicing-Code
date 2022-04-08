/*******************************************************************************
 *
 * [Description]: Write a C function to count the number of 1’s in an integer number.
 *
 * [File Name]: Ex_30.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int countONEs(int n){
	int check,count=0;
	while(n != 0){
		check = n%10;
		if(check == 1){
			count++;
		}
		n/=10;
	}
	return count;
}

int main(int argc, char *argv[])
{
	int num;
	printf("Please Enter The Number : ");
	scanf(" %d",&num);

	printf("\nNumber Of One's is : %d \n",countONEs(num));

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
