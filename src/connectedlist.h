/*
 * connectedlist.h
 *
 *  Created on: Nov 29, 2013
 *      Author: avi
 */

#ifndef CONNECTEDLIST_H_
#define CONNECTEDLIST_H_

struct stringStruct {
	char str;
	struct stringStruct * next;
};

typedef struct stringStruct cstring;

void connected_list_string();
#endif /* CONNECTEDLIST_H_ */
