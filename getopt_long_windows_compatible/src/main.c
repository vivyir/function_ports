#include <stdio.h>
//#include <unistd.h>
#include "getopt.h"

static struct option long_options[] = {

	{"windows", no_argument, NULL, 'w'},
	{"compatible", no_argument, NULL, 'c'},
	{"moment", no_argument, NULL, 'm'},
	{"file", required_argument, NULL, 'f'},
	{NULL, 0, NULL, 0}

};

int main(int argc, char *argv[]) {
   int option;
   // put ':' at the starting of the string so compiler can distinguish between '?' and ':'
   while((option = getopt_long(argc, argv, ":wf:cm", long_options, NULL)) != -1){ //get option from the getopt() method

      switch(option){

         //For option i, r, l, print that these are options

         case 'w':
         case 'c':
         case 'm':

            printf("Given Option: %c\n", option);
            break;

         case 'f': //here f is used for some file name

            printf("Given File: %s\n", optarg);
            break;

         case ':':

            printf("option needs a value\n");
            break;

         case '?': //used for some unknown options

            printf("unknown option: %c\n", optopt);
            break;

      }
   }

   for(; optind < argc; optind++){ //when some extra arguments are passed
      printf("Given extra arguments: %s\n", argv[optind]);
   }

}
