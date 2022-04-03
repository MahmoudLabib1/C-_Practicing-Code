/*******************************************************************************
 *
 * [Description]: Write a program that print your name and your age
 *                in a new line.
 *
 * [File Name]: Ex_2.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/



#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[]="Mahmoud Labib";    /*If you use array of character OR pointer to character will put '\0' automatically*/
	int age =24;
	printf("The Name is : ");
	for(int i=0; name[i] != '\0' ; i++){
         printf("%c",name[i]);
	}
	printf(" , The Age is :%d\n",age);
	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
