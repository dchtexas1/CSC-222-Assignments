#include<stdio.h>                //for communicating with the command line
#include<time.h>                 //for creating a seed for srand()
#include<stdlib.h>               //for rand() and srand()

int main(int argc, char const *argv[]) {
	srand(time(NULL));

	int a = rand();				//create two values
	int b = rand();

	int *x;						//create two pointers
	int *y;

	x = &a;						// call by value
	y = &b;

	if (*x > *y) {				//simple if statement
		printf("%d is greater than %d\n", *x, *y);
	}
	else {
		printf("%d is less than %d\n", *x, *y);
	}

	return 0;
}
