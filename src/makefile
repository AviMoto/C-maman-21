lists : lists.o connectedlist.o
	gcc -g -Wall -ansi -pedantic lists.o  connectedlist.o -o lists
	
lists.o : lists.c lists.h
	gcc -c -Wall -ansi -pedantic lists.c -o lists.o
	
connectedlist.o : connectedlist.c connectedlist.h
	gcc -c -Wall -pedantic -ansi connectedlist.c -o connectedlist.o