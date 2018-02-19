#include <stdio.h>
#include <stdlib.h>

int *pointer() {			//the value was of automatic storage class,
	static int temp;		//so it was losing it's value when the function
	return &temp;			//exits. Also I removed the redundant initialization
}

int main() {
	int *ptr;
	ptr = pointer();
	*ptr = 42;
	printf("%d\n", *ptr);

	return 0;
}
