/*
 * memoryarray.c
 *
 *  Created on: Dec 1, 2013
 *      Author: avi
 */

#include <stdio.h>
#include <stdlib.h>
#include "memoryarray.h"

void stroe_in_memory() {
	int index = 1, interval = 1;
	char *string = NULL, input;

	while (1 == 1) { /*  make infinty loop to raise memory when it need */
		if (index % STRING_BLOCK == 0) { /* Test if we need malloc or realloc */
			string = (char *) realloc(string,
					STRING_BLOCK * interval * sizeof(char));
		} else {
			string = (char *) malloc(STRING_BLOCK * sizeof(char));
		}
		if (string != NULL ) { /* verify that we get a pointer */
			for (index = STRING_BLOCK * (interval - 1); /* get input from the user in intervals of STRING_BLOCK*/
			index < STRING_BLOCK * interval; ++index) {
				if ((input = getchar()) == '\n') { /* check if we get new line to end the input*/
					break;
				}
				*(string + index) = input; /* save the input in memory */
			}
			if (input == '\n') { /* test if we break because for loop or due to end of input */
				break;
			}
			++interval;
		} else {
			printf("\nCan't find free space in memory\n");
			break;
		}
	}
	printf("\nthe string we get is %s\n", string);
	if (string != NULL ) {
		free(string);
	}
}
