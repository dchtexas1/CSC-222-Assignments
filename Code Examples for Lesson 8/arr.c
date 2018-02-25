#include <stdio.h> 
        
int main( void ) {

	int numbers[10];
	int i;
	int index = 2;
	
	for(i = 0; i < 10; i++ ) 
		numbers[i] = i*10;										/* 0: ________________________________ */
	
	numbers[8] = 25;											/* 1: ________________________________ */
	numbers[5] = numbers[9] / 3;								/* 2: ________________________________ */
	numbers[4] += numbers[2] / numbers[1];						/* 3: ________________________________ */
	numbers[index] = 5;											/* 4: ________________________________ */
	++numbers[index];											/* 5: ________________________________ */
	numbers[numbers[index]] = 100;								/* 6: ________________________________ */
	numbers[index + 1] = --numbers[numbers[index + 2] / 7];		/* 7: ________________________________ */
	
	for(index = 0; index < 10; index++)
		printf("%d\t", numbers[index]);
	
};