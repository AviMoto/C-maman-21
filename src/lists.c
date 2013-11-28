/*
 ============================================================================
 Name        : lists.c
 Author      : Avi Levy
 Version     :
 Copyright   : All Right for Avi Levy
 Description : Maman 21 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void) {
	int index=0, interval=1;
	char *string, choise=0;

	printf("\nplease chose how to store the input:\n");
	printf("1. connected list\n");
	printf("2. array in memory\n");
	printf("enter your chose:");
	choise = getchar();
	printf("\nStart to enter your string\n");
	switch(choise){
		case '1':
			break;
		case '2':
			while((choise = getchar())!= '\n' || choise == EOF){
				if(index == STRING_BLOCK){
					string = (char *)realloc(string, STRING_BLOCK*interval*sizeof(char));
				} else {
					string = (char *)malloc(STRING_BLOCK*sizeof(char));
				}
				if (string != 0){
					for(index=STRING_BLOCK*(interval-1);index<STRING_BLOCK;++index){
						*(string+index) = choise;
						if((choise = getchar())== '\n' || choise == EOF){
							break;
						}
					}
					if(index != STRING_BLOCK){
						break;
					}
					++interval;
				}
			}
			break;
		default:
			break;
	}
	printf("the string we get is %s",string);
	if(string != 0){
		free(string);
	}
	return 0;
}
