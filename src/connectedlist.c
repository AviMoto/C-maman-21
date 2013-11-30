/*
 * connectedlist.c
 *
 *  Created on: Nov 29, 2013
 *      Author: avi
 */

#include "connectedlist.h"
#include <stdio.h>
#include <stdlib.h>

void connected_list_string() {
	cstring *list = NULL, *first = NULL;
	char input;

	first = (cstring *) malloc(sizeof(cstring));
	if(first != NULL){
		list = first;
		first->next = NULL;
	}
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
	free(first);
}
