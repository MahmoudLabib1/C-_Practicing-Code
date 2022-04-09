/*******************************************************************************
 *
 * [Description]: Write a C function to count the number of 1’s in an unsigned 32-bit integer.
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
	unsigned int mask=0x80000000;
	int i, count=0;
	for(i=0 ; i<32 ; i++){
		if((n<<i) & mask){
			count++;
		}
	}
	return count;
}

int main(int argc, char *argv[])
{
	unsigned int num=0x0000FFFF ;

	printf("\nNumber Of One's at number " "0x0000FFFF" " is : %d \n",countONEs(num));

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
