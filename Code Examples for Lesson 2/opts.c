#include <stdio.h>
int main()
{
	int *ptr, q;
	q = 50;

	ptr = &q; 	// address of q is assigned to ptr

	/* display q's value directly */
	printf("\nValue of variable q: %d\n", q);

	/* display q's value using pointer */
	printf("\nValue of variable q: %d\n", *ptr);

	/* display q's size using pointer */
	printf("\nSize of variable q: %d\n", sizeof(*ptr));

	return 0;
}
