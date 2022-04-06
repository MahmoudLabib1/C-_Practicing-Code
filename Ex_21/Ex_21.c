/*******************************************************************************
 *
 * [Description]: Write a C Function that return the addition or subtraction or
 *                multiplication or division for two numbers. The function should take the
 *                required operation and two numbers as arguments. It also should check
 *                that the input operation is one of those operation that mentioned before
 *                and if not it should return error. The function should be implemented
 *                using switch case.
 *
 * [File Name]: Ex_21.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

/*the operator must be one off this (+,-,*,/)*/
double simple_calculator(float num1 , float num2 , char op){

	if( (op =='+') || (op =='-') || (op =='*') || (op =='/')){
		switch(op){
		case '+':
			return num1+num2;
			break;
		case '-':
			return num1-num2;
			break;
		case '*':
			return num1*num2;
			break;
		case '/':
			return num1+num2;
			break;
		}
	}
	else
	{
		printf("ERORR! The operator should be (+,-,*,/)");
		return -1 ;
	}
}

int main(int argc, char *argv[])
{
	int num1 , num2 ;
	char op;

	printf("Please enter 1st number: ");
	scanf("%d",&num1);

	printf("\nPlease enter 2nd number: ");
	scanf("%d",&num2);

	printf("\nPlease enter operator: ");
	scanf(" %c",&op);

	printf("\nThe result is : %f\n",simple_calculator(num1,num2,op));

	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
