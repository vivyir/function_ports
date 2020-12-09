SOURCEDIR = src
SOURCEFILES = main.c keyboard.c
OBJFILES = main.o keyboard.o
HEADERFILES = keyboard.h
BINNAME = main

CC = gcc
CCFLAGS = -Wall -Werror -pedantic -static 

.PHONY :
	clean
	binclean
	binary
	setup

binary : main.o keyboard.o keyboard.h 
	$(CC) $(CCFLAGS) $(OBJFILES) -o $(BINNAME)

main.o : main.c
	$(CC) $(CCFLAGS) -c $(SOURCEFILES)

keyboard.o : keyboard.c
	$(CC) $(CCFLAGS) -c $(SOURCEFILES)

main.c : setup

keyboard.c : setup

setup :
	cp $(SOURCEDIR)/* .

clean :
	rm -f $(SOURCEFILES) $(OBJFILES) $(HEADERFILES) $(BINNAME)

polish :
	rm -f $(SOURCEFILES) $(OBJFILES) $(HEADERFILES)
	strip $(BINNAME)
