#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[10] = "3.14";
	printf("String value of pi = %s\n", a);
	float pi = atof(a);
	printf("Float value of pi = %f\n", pi);

	int b = 54325;
	char buffer[20];
	printf("\nInteger value = %d\n", b);

	itoa(b, buffer, 2); // here 2 means binary
	printf("Binary value = %s\n", buffer);

	itoa(b, buffer, 10); // here 10 means decimal
	printf("Decimal value = %s\n", buffer);

	itoa(b, buffer, 16); // here 16 means Hexadecimal
	printf("Hexadecimal value = %s", buffer);
	return 0;
}
