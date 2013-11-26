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
	char choise=0, *string;

	printf("\nplease chose how to store the input:\n");
	printf("1. connected list\n");
	printf("2. array in memory\n");
	printf("enter your chose:");
	choise = getchar();
	switch(choise){
		case '1':
			break;
		case '2':
			string = malloc(10*sizeof(char));
			if (string != 0){

			}
			break;
		default:
			break;
	}
	return 0;
}
