#include<stdio.h>

void test_local();
void test_global();

int m = 22, n = 44; // global variables

int main()
{
	test_local();
	test_global();
}

void test_local()
{
	int a = 50, b = 80; // local variables
	printf("\nLocal variables: a = %d and b = %d\n", a, b);
}

void test_global()
{
	printf("\nGlobal variables: m = %d and n = %d\n", m, n);
}
