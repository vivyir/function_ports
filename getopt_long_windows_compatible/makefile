SRCFILE = main.c getopt.c getopt_long.c
OBJFILE = obj/main.o obj/getopt.o obj/getopt_long.o
HDRFILE = src/getopt.h
BINFILE = main
CC = gcc
CFLAGS = -Wall -Wextra -pedantic

.PHONY :
	binary

vpath %.h src/
vpath %.c src/
vpath %.o obj/

binary : $(OBJFILE) $(HDRFILE)
	$(CC) $(OBJFILE) $(HDRFILE) $(CFLAGS) -o $(BINFILE)

obj/main.o : main.c
	$(CC) -c src/main.c -o obj/main.o

obj/getopt.o : getopt.c
	$(CC) -c src/getopt.c -o obj/getopt.o

obj/getopt_long.o : getopt_long.c
	$(CC) -c src/getopt_long.c -o obj/getopt_long.o
