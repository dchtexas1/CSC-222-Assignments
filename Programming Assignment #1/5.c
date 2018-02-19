#include <stdio.h>

void swap(int *x, int *y) {

	*x += *y;
	*y = *x - *y;			//through the power of arithmetic you can swap two
	*x -= *y;				//values without using a thrid value.

}

int main(int argc, char const *argv[]) {
	int a = 5, b = 7;

	printf("The value of A before swap = %d \n", a);
	printf("The value of B before swap = %d \n", b);

	swap(&a, &b);

	printf("\nThe value of A after swap = %d \n", a);
	printf("The value of B after swap = %d \n", b);

	return 0;
}
