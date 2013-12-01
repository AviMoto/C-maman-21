/*
 ============================================================================
 Name        : lists.c
 Author      : Avi Levy
 Version     :
 Copyright   : All Right for Avi Levy
 Description : Maman 21 in C, this program let the user chose between two
 	 	 	   option one is to save string in memory as array of char by
 	 	 	   using dinamic memory, the second option is to save the string
 	 	 	   in memory by struct using as connected list
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


int main(void) {
	int  again = 1;
	char choise = '\0';


	while (again > 0) {
		/* Print a menu for user to chose between to option of running */
		printf("\nplease chose how to store the input:\n");
		printf("1. connected list\n");
		printf("2. array in memory\n");
		printf("enter your chose:");
		choise = getchar(); /* Get input from the user */
		getchar();
		printf("\nStart to enter your string\n");
		switch (choise) {	/* call to the right function according to the user request */
		case '1':
			connected_list_string();
			again = 0;
			break;
		case '2':
			stroe_in_memory();
			again = 0;
			break;
		default:
			printf(
					"\nSorry but this option dosn't exist in the menu, please try again\n\n\n");
			getchar();
			break;
		}
	}
	return 0;
}
