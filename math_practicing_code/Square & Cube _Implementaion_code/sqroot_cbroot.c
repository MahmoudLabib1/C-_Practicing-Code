/*******************************************************************************
 *
 * [Description]: Write The implementation code to found square and Cubice root
 *
 * [File Name]: sqroot_cbroot.c
 *
 * [Difficulty]: Medium Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>

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










float cbroot(int number){

	int start=0, end=number,mid;
	float ans; //To store the final answer

	/* To find integral part of cube root of number */
	while(start <= end){

		// Find The mid
		mid=(start + end)/2;

		/* If mid cube equal number
		 * this mean the number is perfect square */
		if(mid*mid*mid == number){
			ans =mid;
			break;
		}


		/* If mid cube (integral part) less than number
		 * Increment start = mid+1 */
		if(mid*mid*mid < number){
			ans =start;
			start=mid+1;
		}


		/* If mid cube (integral part) more than number
		 * Decrement start = mid-1 */
		else{
			end = mid-1;
		}
	}

	/* To find The fraction part
	 * Of cube root */
	float fraction=0.1;
	for(int i=1 ; i<=6 ; i++){
		while(ans*ans*ans <= number){
			ans=ans+fraction;
		}

		ans= ans-fraction;
		fraction= fraction/10;

	}
	return ans;
}
int main(int argc, char *argv[]){

	int num;
	float sqrt ,cubice;
	printf("Enter number : ");
	scanf("%d",&num);

	sqrt= sqroot(num);

	printf("\n The square root for number %d is : %f\n",num,sqrt);
	cubice = cbroot(num);
	printf("\n The cubice root for number %d is : %f\n",num,cubice);

	system("pause");
	return 0;
}
