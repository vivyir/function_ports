#include <stdio.h>
#include "keyboard.h"

int main() {

	char key;
	int y;
	int counter = 0;

	while (1) {
	
		if (! ( kbhit() ) ) {
		
			printf("\ri have mained %i times till now", counter);
			counter++;

			// actual main
		
		} else {
		
			key = getch();

			switch(key) {

				case 32 :

					printf("\n\rthe key '%d' which is '%c' got pressed, damnit, execution paused...\npress any key again to run...\n", key, key);
					y = 1;
					break;

				case 113 :

					printf("\n\rthe key '%d' which is '%c' got pressed, damnit, execution halted...\n", key, key);
					return 0;

				default :

					printf("\n\rthe key '%d' which is '%c' got pressed, nothing special, carry on...\npress any key again to run...\n", key, key);
					y = 1;
					break;

			}
		
		}

		if (y == 1) {
		
			getch();
			y=0;

		}

	
	}

	return 0;

}
