Ooooh boy was this hard to port, Not many resources out there, Had to
scrape glibc source code and some old open source stuff from apple

portTime.txt : {

	7 hours 54 minutes

	(

	- Source code was modified and made sure to run under both linux and
		  windows

	- getopt.h was all written by me when i scraped both the glibc source and
		  stackoverflow

	- Main getopt_long() function was from
		  https://opensource.apple.com/source/Kerberos/Kerberos-47/KerberosFramework/Kerberos5/Sources/util/windows/getopt_long.c.auto.html

	- That source was formatted very oddly and also had many conflicting lines
		  and errors which i solved

	- Compiled with -Wall -Wextra -pedantic to make sure I don't miss any
		  warnings (Again please open an issue as soon as you get a
			warning)

	- Notes :

	    - Was compiled using mingw32-make and the mingw32 compiler for windows
		      using the same makefile

	    - Same makefile and with GNU/Make and GCC for linux

	)

}

To compile run : 'make'
