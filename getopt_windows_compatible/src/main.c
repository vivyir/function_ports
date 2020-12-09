#include <stdio.h>
#include "getopt.h"

int main(int argc, char *argv[]) {
   int option;
   // put ':' at the starting of the string so compiler can distinguish between '?' and ':'
   while((option = getopt(argc, argv, ":wf:cm")) != -1){ //get option from the getopt() method
      switch(option){

         //For option w, c, m, print that these are options

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
