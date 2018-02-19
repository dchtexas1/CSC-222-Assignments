#include<stdio.h>                //for communicating with the command line
#include<stdbool.h>              //for using bool, true, and false
#include<time.h>                 //for creating a seed for srand()
#include<stdlib.h>               //for rand() and srand()


bool isEven(int x) {            //determines if the passed in value is even
	if (x % 2 == 0) {           //mod 2 is how to check for evenness
		return true;
	} else {
		return false;
	}
}

int main(int argc, char const *argv[]) {
	srand(time(NULL));          // seeds rand()
	int r = rand();             // generates a random number
	if (isEven(r)) {            // self explanatory
		printf("%d is an even number.\n", r);
	} else {
		printf("%d is an odd number.\n", r);
	}
	return 0;
}
