/*******************************************************************************
 *
 * [Description]: Write C Function that converts the any letter from lowercase to uppercase.
 *
 * [File Name]: Convert_lowTOup.c
 *
 * [Difficulty]: basic Level
 *
 * [Author]: Mahmoud_Labib
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct char30{char c[30];}char30;

char30 Convert_lowTOup(const char * input){
	char30 *PtrTochar;
	int i=0;
	PtrTochar= malloc(sizeof(char30));
	strcpy(PtrTochar->c ,input);
	while(i < 30){
		if((PtrTochar->c[i] >= 'a') || (PtrTochar->c[i] <= 'z') ){
			PtrTochar->c[i]=PtrTochar->c[i]-32;
		}
		/*else if(PtrTochar->c[i] == '\0'){
			PtrTochar->c[i] = ' ';
		}*/
		i++;
	}

	return *PtrTochar;
}


int main(int argc, char *argv[])
{
	char30 *ptr;
	ptr= malloc(sizeof(char30));

	*ptr=Convert_lowTOup("mahmoud labib");

	/*char *o="mahmoud labib";
	char *l;
	l=malloc(sizeof(char)*20);
	strcpy(l,o);
	printf("%s \n\n\n",l);*/

	printf("%s \n",(char*)ptr);
	system("pause");   //To make the terminal not closed after executing the code
	return 0;
}
