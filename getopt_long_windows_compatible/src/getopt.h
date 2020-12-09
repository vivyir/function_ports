#ifndef GETOPT_H

#define GETOPT_H

extern int opterr;		/* if error message should be printed */
extern int optind;		/* index into parent argv vector */
extern int optopt;		/* character checked for validity */
extern int optreset;  	/* reset getopt  */
extern char *optarg;	/* argument associated with option */

struct option {

	const char *name;
	int has_arg;
	int *flag;
	int val;

};

#define no_argument 0
#define required_argument 1
#define optional_argument 2

#ifndef GETOPT_LONG_C
#define GETOPT_LONG_C
int getopt_long(int nargc, char ** nargv, char * options, struct option * long_options, int * index);
#endif

int getopt(int nargc, char * const nargv[], const char *ostr);

#endif
