#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) // command line arguments
{

	printf("\nProgram name: %s \n", argv[0]);

	printf("1st arg: %s \n", argv[1]);
	printf("%d \n", strlen(argv[1]));

	printf("2nd arg: %s \n", argv[2]);
	printf("%s \n", strupr(argv[2]));

	printf("3rd arg: %s \n", argv[3]);

	printf("4th arg: %s \n", argv[4]);
	printf("%s \n", strrev(argv[4]));

	printf("5th arg: %s \n", argv[5]);

	return 0;
}
