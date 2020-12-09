SRCFILE = main.c clrscr.c
OBJFILE = obj/main.o obj/clrscr.o
HDRFILE = src/clrscr.h
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

obj/clrscr.o : clrscr.c
	$(CC) -c src/clrscr.c -o obj/clrscr.o
