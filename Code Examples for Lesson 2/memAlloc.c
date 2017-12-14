#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *mem_allocation;

	mem_allocation = malloc(20*sizeof(char));
	strcpy(mem_allocation, "Systems Programming");
	printf("\nDynamically allocated memory content: %s\n", mem_allocation);

	mem_allocation = realloc(mem_allocation, 100*sizeof(char));
	strcpy(mem_allocation, "space is extended upto 100 characters");
	printf("Resized memory content: %s\n", mem_allocation);

	free(mem_allocation);
}
