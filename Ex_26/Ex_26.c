/*******************************************************************************
 *
 * [Description]: You are designing a poster which prints out numbers with a unique
 *                style applied to each of them. The styling is based on the number of
 *                closed paths or holes present in a giver number. The number of holes
 *                that each of the digits from 0 to 9 have are equal to the number of closed
 *                paths in the digit.
 *
 * [Example]: (input)-> 888 = 6 holes.
 *
 *             -> 1, 2, 3, 5 and 7 = 0 holes.
 *             -> 0, 4, 6, and 9 = 1 hole.
 *             -> 8 = 2 holes.
 *
 * [File Name]: Ex_26.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define ONE_HOLE      1
#define TWO_HOLES     2
int countHole(int number){

	int sum=0,check;
	while(number != 0){
		check = number %10;
		if(check == 9 || check == 6 || check == 4 || check == 0){
			sum += ONE_HOLE;
			number /=10;
		}
		else if(check == 8){
			sum+=TWO_HOLES;
			number /=10;
		}
		else
		{
			number /=10;
		}
	}
	return sum;
}

int main(int argc, char *argv[])
{
	int num1;
	printf("Please Enter The 1st Number : ");
	scanf("%d",&num1);

	printf("\nThe Summation Of Holes At Number Is : %d\n",countHole(num1));

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
