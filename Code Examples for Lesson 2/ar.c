#include<stdio.h>

int main()
{
	printf("One dimensional array:\n");
	int i;
	int o_arr[5] = {1,2,3,4,5};
	// Accessing each element
	for (i = 0; i < 5; i++)
	{
		printf("Value of o_arr[%d] is %d \n", i, o_arr[i]);
		}

	printf("\nTwo dimensional array:\n");
	int j,k;
	int t_arr[2][2] = {1,2,3,4};
	// Accessing each element
	for (j = 0; j < 2; j++)
	{
		for (k = 0; k < 2; k++)
		{
			printf("Value of t_arr[%d][%d] is %d\n", j, k, t_arr[j][k]);
		}
	}
}
