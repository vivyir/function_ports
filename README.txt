A repository of various functions I have ported over the days for when I
need them on a specific use case and or want them to be crossplatform
instead of locked into linux or windows.

Each folder contains :
	
	- an src and an obj directory
	- a makefile
	- in the src directory you can find the c \
		function, its header and a main.c as an example
	- portTime.txt to see how long it took for me to \
		scrape the net for ways to port them
	- and possible a readme guiding you thru the directory

How to use :

	Mix and match the c and h function files
	example : merge getopt.c and keyboard.c with eachother and also \
		merge their respective .h files and now you got your
		own custom .c and .h file with those functions
	And also dont forget to use double quotes when you want to include
	the header files

Notes :
	
	The ones that say windows compatible can also be built for linux
	It's only 'Compatible' not 'For windows'

	However those that have either for_linux or for_windows can only be
	built on that specific system, I don't think I will be adding any
	windows specific ones as I aim to make these as multi-platform as
	possible and not lock them in for a single OS

	Test compilations for windows were done with : mingw32-make and \
		mingw GCC

	And for linux : GNU Make and GCC

	You can find each files flags in their makefile

	I also used -Wall -Wextra and -pedantic while compiling on both
	platforms so you should face no problem doing so aswell, if you do
	please do not hestitate to open an issue, Thank you!
