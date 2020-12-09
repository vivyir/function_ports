SRCFILE = main.c getopt.c
OBJFILE = main.o getopt.o
HDRFILE = getopt.h
BINFILE = main
CC = gcc
CFLAGS = -Wall -Wextra -pedantic

.PHONY :
	binary
	setup
	polish
	clean

binary : main.o getopt.o getopt.h
	$(CC) $(OBJFILE) $(HDRFILE) $(CFLAGS) -o $(BINFILE)

main.o : main.c
	$(CC) -c main.c

main.c : setup

getopt.o : getopt.c
	$(CC) -c getopt.c

getopt.c : setup

getopt.h : setup

setup :
	cp src/* .

polish :
	rm -f $(SRCFILE) $(OBJFILE) $(HDRFILE)

clean :
	rm -f $(SRCFILE) $(OBJFILE) $(HDRFILE) $(BINFILE)
