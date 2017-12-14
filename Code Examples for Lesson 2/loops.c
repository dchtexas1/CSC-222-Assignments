#include <stdio.h>

int main()
{
	// for loop
	printf("For loop:\n");
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ",i);
	}

	// while loop
	printf("\n\nWhile loop:\n");
	int j = 3;
	while(j < 10)
	{
		printf("%d ", j);
		j++;
	}

	// do while loop
	printf("\n\nDo while loop:\n");
	int k = 1;
	do
	{
		printf("%d ", k);
		k++;
	} while(k <= 4 && k >= 2);
}
