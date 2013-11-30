lists : lists.o connectedlist.o memoryarray.o
	gcc -g -Wall -ansi -pedantic lists.o  connectedlist.o memoryarray.o -o lists
	
lists.o : lists.c lists.h
	gcc -c -Wall -ansi -pedantic lists.c -o lists.o
	
connectedlist.o : connectedlist.c connectedlist.h common.h
	gcc -c -Wall -pedantic -ansi connectedlist.c -o connectedlist.o
	
memoryarray.o : memoryarray.c memoryarray.h common.h
	gcc -c -Wall -pedantic -ansi memoryarray.c -o memoryarray.o