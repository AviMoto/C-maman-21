/*
 * connectedlist.h
 *
 *  Created on: Nov 29, 2013
 *      Author: avi
 */

#ifndef CONNECTEDLIST_H_
#define CONNECTEDLIST_H_
#include "common.h"

/*
 * this struct id use as connected list of strings
 * char str - hold the string
 * struct stringStruct * next - pointer for the next struct
 */
struct stringStruct {
	char str[STRING_BLOCK];
	struct stringStruct * next;
};

typedef struct stringStruct cstring;

/*
 * this function get string as input from the user and save it
 * in memory in struct of connected list
 */
void connected_list_string();
#endif /* CONNECTEDLIST_H_ */
