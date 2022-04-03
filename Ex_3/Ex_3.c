/*******************************************************************************
 *
 * [Description]: Write a program for converting temperature from
 *                degrees Celsius to degrees Fahrenheit,
 *                given the formula: -----> F = C x (9/5)+32 <-----
 *
 *
 * [File Name]: Ex_3.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/



#include <stdio.h>

int main(int argc, char *argv[])
{
    float c=32.5, F;
    F = ((c * (9/5)) + 32);
	printf("The Temperature by Fahrenheit is: %3f",F);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
