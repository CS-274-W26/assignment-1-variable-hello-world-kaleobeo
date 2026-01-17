#include <stdio.h> // Necessary for printf()
#include <time.h>
#include <stdlib.h>
// TODO Other includes


int main() {
	srand(time(NULL));

	int myrand = rand() % 11;
	
	if (0 <= myrand && myrand <= 4) {
		printf("eat more beef, kick less cats.\n");	
	} else if (5 <= myrand && myrand <= 9) {
		printf("FRODO LIVES\n");	
	} else if (myrand == 10) {
		printf("larn is the best roguelike\n");	
	}
        printf("The random number was: %d\n", myrand);
}
