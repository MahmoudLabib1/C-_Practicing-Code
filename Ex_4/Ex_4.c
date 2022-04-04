/*******************************************************************************
 *
 * [Description]:  Write a program that reads the radius of a circle and
 *                 calculates the area and circumference then prints the results.
 *
 * [File Name]: Ex_4.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/



#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[])
{

	float redius,area,circumference;
	printf("Enter The redius : ");
	scanf("%2f",&redius);

	area =(PI * (redius*redius));
	circumference = (2*PI*redius);
	printf("\nThe area of circle is : %2f\n",area);
	printf("The circumference of circle is : %2f\n",circumference);

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
