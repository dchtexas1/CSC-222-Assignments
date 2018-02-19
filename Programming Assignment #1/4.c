#include <stdio.h>

void increase(int *a, int *b) {
	*a += 1;
	*b += 1;
}

int main() {
	int m = 22, n = 44;

	printf("\nInitial values: m %d and n = %d\n", m, n);

	increase(&m, &n);			//needed to call by value

	printf("\nValues after increase: m = %d and n = %d\n", m, n);

	return 0;
}
