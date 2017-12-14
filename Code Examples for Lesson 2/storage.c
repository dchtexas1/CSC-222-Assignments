#include<stdio.h>

int x = 10;

void a_inc(void);
void s_inc(void);

int main()
{
	printf("Auto variable:\n");
	a_inc();
	a_inc();
	a_inc();

	printf("\n\nStatic variable:\n");
	s_inc();
	s_inc();
	s_inc();

	printf("\n\nExtern variable:");
	extern int y;
	printf("\nThe value of x is %d", x);
	printf("\nThe value of y is %d\n", y);

	return 0;
}

int y = 50;

void a_inc(void)
{
	auto int i = 0;
	printf ("%d ", i);
	i++;
}

void s_inc(void)
{
	static int j = 0;
	printf ("%d ", j);
	j++;
}
