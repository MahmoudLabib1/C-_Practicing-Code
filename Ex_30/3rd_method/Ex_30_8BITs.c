/*******************************************************************************
 *
 * [Description]: Write a C function to count the number of 1’s in an unsigned 8-bit integer.
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

int countONEs(unsigned char n){
	unsigned char mask=0x80;
	int i, count=0;
	for(i=0 ; i<8 ; i++){
		if((n<<i) & mask){
			count++;
		}
	}
	return count;
}

int main(int argc, char *argv[])
{
	unsigned char num=0x0F ;

	printf("\nNumber Of One's at number " "0x0F" " is : %d \n",countONEs(num));

	system("pause");  //To make the terminal not closed after executing the code
	return 0;
}
