/*******************************************************************************
 *
 * [Description]: Write a program that reads a positive integer and
 *                checks if it is a perfect square.
 *
 * [File Name]: Ex_8.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <math.h>

/* Function to find the square-root of number
 * Algorithm using Binary Search */
float sqroot(int number){

	int start=0, end=number,mid;
	float ans; //To store the final answer

	/* To find integral part of square root of number */
	while(start <= end){

		// Find The mid
		mid=(start + end)/2;

		/* If mid square equal number
		 * this mean the number is perfect square */
		if(mid*mid == number){
			ans =mid;
			break;
		}


		/* If mid square (integral part) less than number
		 * Increment start = mid+1 */
		if(mid*mid < number){
			ans =start;
			start=mid+1;
		}


		/* If mid square (integral part) more than number
		 * Decrement start = mid-1 */
		else{
			end = mid-1;
		}
	}

	/* To find The fraction part
	 * Of square root */
	float fraction=0.1;
	for(int i=1 ; i<=6 ; i++){
		while(ans*ans <= number){
			ans=ans+fraction;
		}

		ans= ans-fraction;
		fraction= fraction/10;

	}
	return ans;
}





int main(int argc, char *argv[])
{

	int num ,check,square_root;
	printf("Please Enter Positive Number : ");
	scanf("%d",&num);
	check = (num > 0)-(num <= 0);

	if(check == -1)
	{
		printf("\nError! Number is Negative");
	}

	square_root = sqroot(num);

	if((square_root * square_root) == num){
		printf("\nThe Number %d Is perfect square \n",num);
	}
	else
	{
		printf("\nThe Number %d Is not perfect square \n",num);
	}


	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
