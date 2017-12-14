#include <stdio.h>
#include <string.h>

int main ()
{
	char string[20] = "Systems Programming";
	printf("\nString: %s \n", string);

	char copy_string[20] = "";
	strcpy(copy_string, string);
	printf("\nString copy: %s \n", copy_string);

	int len;
	len = strlen(string);
	printf("\nString length: %d \n", len);

	printf("\nUpper case: %s \n", strupr(string));

	printf("\nReverse: %s \n", strrev(string));

	printf("\nString: %s \n", string);

	return 0;
}
