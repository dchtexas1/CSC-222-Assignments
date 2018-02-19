#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[]) {
	srand(time(NULL));
	int a = rand();
	int x = rand();
	float f = (float)rand()/(float)(RAND_MAX/a);
	double d = (double)rand()/RAND_MAX*2.0-1.0;;

	if (x == (int)(double)x)
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
		printf("%d\n", x);
	}

	if (x == (int)(double)x)
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
		printf("%d\n", x);
	}

	if (f == (float)(double)f)
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
		printf("%.6f\n", f);
	}

	if (f == -(-f))
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
		printf("%.6f\n", f);
	}

	if (1.0/2 == 1/2.0)
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
	}

	if (d * d >= 0.0)
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
		printf("%.6f\n", d);
	}

	if ((f + d) - f == d)
	{
		printf("\nTrue\n");
	}
	else
	{
		printf("\nFalse\n");
		printf("%.6f\n", f);
		printf("%.6f\n", d);
	}

	return 0;
}
