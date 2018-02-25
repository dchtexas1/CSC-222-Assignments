# include <stdio.h>
# define N 5

void main(){
	
	int i, *p;
	int a[N] = {1, 2, 3, 4}; 
	int sum1 = 0, sum2 = 0, sum3 = 0;
	
	// accessing through the pointer variable 
	for (p = a; p < &a[N]; ++p)
		sum1 += *p;
	printf("Sum 1: %d\n", sum1);
	
	// accessing through array name as a pointer
	for (i = 0; i < N; ++i)
		sum2 += *(a + i);
	printf("Sum 2: %d\n", sum2);
	
	// accessing through indexing the pointer variable
	p = a;
	for (i = 0; i < N; ++i)
		sum3 += p[i];
	printf("Sum 3: %d\n", sum3);

}