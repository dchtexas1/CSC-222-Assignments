#include <stdio.h>

int main ()
{
	// switch
	printf("Switch case control statement:\n");
	int value = 3;
	switch(value)
	{
		case 1:
		printf("Value is 1 \n");
		break;

		case 2:
		printf("Value is 2 \n");
		break;

		case 3:
		printf("Value is 3 \n");
		break;

		default:
		printf("Value is other than 1,2,3\n");
	}

	// continue
	printf("\n\nContinue case control statement:\n");
	int i;
	for(i = 0; i < 10; i++)
	{
		if(i==5 || i==6)
		{
			printf("\nSkipping %d from display using continue statement \n",i);
			continue;
		}
		printf("%d ",i);
	}

	//go to
	printf("\n\nGo to case control statement:\n");
	int j;
	for(j = 0; j < 10; j++)
	{
		if(j == 5)
		{
			printf("\nWe are using goto statement when j = 5");
			goto LABEL;
		}
		printf("%d ",j);
	}

	LABEL: printf("\nNow, we are inside label name \"LABEL\" \n");
}
