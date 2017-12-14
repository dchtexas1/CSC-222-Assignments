#include<stdio.h>

//function declaration
void by_val_swap(int a, int b);
void by_ref_swap(int *c, int *d);

int main()
{
	int m = 22, n = 44;
	printf("\nValues before swap m = %d and n = %d\n", m, n);

	by_val_swap(m, n);
	by_ref_swap(&m, &n);

}

void by_val_swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf(" \nValues after swap by value m = %d and n = %d\n", a, b);
}

void by_ref_swap(int *c, int *d)
{
	int tmp1;
	tmp1 = *c;
	*c = *d;
	*d = tmp1;
	printf("\nValues after swap by reference m = %d and n = %d\n", *c, *d);
}
