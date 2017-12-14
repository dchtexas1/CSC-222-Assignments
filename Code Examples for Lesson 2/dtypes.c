#include <stdio.h>
int main()
{
	enum MONTH {Jan, Feb, Mar};
	enum MONTH month = Feb;

	if(month == 0)
	printf("\nMonth is January\n");

	else if(month == 1)
	printf("\nMonth is February\n");

	else if(month == 2)
	printf("\nMonth is March\n");
}
