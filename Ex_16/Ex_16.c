/*******************************************************************************
 *
 * [Description]: Write a program to reverse a number.
 *
 * [File Name]: Ex_16.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int reverse_num(int num){
	int reversednum=0, reminder;

	if(num < 10){
		return num;
	}
	while(num != 0){
         reminder = num%10;
         reversednum=reversednum*10+reminder;
         num=num/10;
	}

	return reversednum;
}
int main(int argc, char *argv[])
{
	int num;
	printf("Enter the Number to reverse it\n");
	printf("Enter the Number :");
	scanf("%d",&num);

	printf("\n The result is : %d\n",reverse_num(num));

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
