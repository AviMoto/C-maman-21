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
	int index = 0;

	first = (cstring *) malloc(sizeof(cstring));
	list = first;
	while (list != NULL ) { /* verify that we get a pointer */

		for (index = 0; index < STRING_BLOCK; ++index) {
			if ((input = getchar()) != '\n') {
				list->str[index] = input;
			} else {
				break;
			}
		}
		list->next = (cstring *) malloc(sizeof(cstring));
		list = list->next;
		if (input == '\n') {
			break;
		}
	}
	list->next = NULL;
	printf("The string we get is ");
	while (first->next != NULL ) {
		printf("%s", first->str);
		list = first;
		first = first->next;
		free(list);
	}
	printf("\n");
	free(first);
}
