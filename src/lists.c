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
#include "connectedlist.h"
#include "lists.h"

int main(void) {
	int index = 1, interval = 1, again = 1;
	char *string = NULL, choise = '\0', input;
	cstring *list = NULL, *first;

	while (again > 0) {
		/* Print a menu for user to chose between to option of running */
		printf("\nplease chose how to store the input:\n");
		printf("1. connected list\n");
		printf("2. array in memory\n");
		printf("enter your chose:");
		choise = getchar(); /* Get input from the user */
		getchar();
		printf("\nStart to enter your string\n");
		switch (choise) {
		case '1':
			first = (cstring *) malloc(sizeof(cstring));
			list = first;
			while ((input = getchar()) != '\n') { /* check if we get new line to end the input*/
				if (list != NULL) { /* verify that we get a pointer */
					list->str = input;
					list->next = (cstring *) malloc(sizeof(cstring));
					list = list->next;
				}
			}
			printf("The string we get is ");
			while (first->next != NULL) {
				putchar(first->str);
				list = first;
				first = first->next;
				free(list);
			}
			again = 0;
			break;
		case '2':
			while (1 == 1) { /*  make infinty loop to raise memory when it need */
				if (index % STRING_BLOCK == 0) { /* Test if we need malloc or realloc */
					string = (char *) realloc(string,
							STRING_BLOCK * interval * sizeof(char));
				} else {
					string = (char *) malloc(STRING_BLOCK * sizeof(char));
				}
				if (string != NULL) { /* verify that we get a pointer */
					for (index = STRING_BLOCK * (interval - 1); /* get input from the user in intervals of STRING_BLOCK*/
					index < STRING_BLOCK * interval; ++index) {
						if ((input = getchar()) == '\n') { /* check if we get new line to end the input*/
							break;
						}
						*(string + index) = input; /* save the input in memory */
					}
					if ((index % STRING_BLOCK) != 0) { /* test if we break because for loop or due to end of input */
						break;
					}
					++interval;
				} else {
					printf("\nCan't find free space in memory\n");
					break;
				}
			}
			printf("\nthe string we get is %s\n", string);
			again = 0;
			break;
		default:
			printf(
					"\nSorry but this option dosn't exist in the menu, please try again\n\n\n");
			getchar();
			break;
		}
	}
	if (string != NULL) {
		free(string);
	}
	return 0;
}
