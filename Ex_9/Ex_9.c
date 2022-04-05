/*******************************************************************************
 *
 * [Description]: Write a program that reads a student grade percentage
 *                and prints "Excellent" if his grade is greater than or equal
 *                85, "Very Good" for 75 or greater; "Good" for 65, "Pass"
 *                for 50, "Fail" for less than 50.
 *
 * [File Name]: Ex_9.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int grade;
	printf("Please Enter your grade : ");
	scanf("%d",&grade);

	if(grade >=85 )
	{
		printf("Excellent\n");
	}


	else if(grade >= 75){
		printf("Very Good\n");
	}
	else if(grade >= 65)
	{
		printf("Good\n");
	}
	else if(grade >= 50)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
