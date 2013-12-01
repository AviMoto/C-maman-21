/*
 * connectedlist.c
 *
 *  Created on: Nov 29, 2013
 *      Author: avi
 */

#include "connectedlist.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * this function get string as input from the user and save it
 * in memory in struct of connected list
 */
void connected_list_string() {
	cstring *list = NULL, *first = NULL;
	char input;
	int index = 0;

	first = (cstring *) malloc(sizeof(cstring));	/* first try off memory allocation from struct */
	list = first;
	while (list != NULL) { /* verify that we get a pointer */
		/* loop to insert the string to the struct's char array */
		for (index = 0; index < STRING_BLOCK; ++index) {
			if ((input = getchar()) != '\n') {
				list->str[index] = input;
			} else {
				break;
			}
		}
		list->next = (cstring *) malloc(sizeof(cstring));	/* try to allocate memory for new struct */
		list = list->next;
		if (input == '\n') {
			break;
		}
	}
	list->next = NULL;
	printf("The string we get is ");
	while (first->next != NULL) {	/* print all the string get from the user */
		printf("%s", first->str);
		list = first;
		first = first->next;
		free(list);	/* free the current struct */
	}
	printf("\n");
	free(first);
}
