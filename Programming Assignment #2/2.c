#include <stdio.h>
#include <math.h>

int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int main(int argc, char const *argv[]) {
	int matrix[5][5];		//creates the matrix and the traversal variables
	int x, y;

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			if (y==x) {
				matrix[x][y] = 5*pow(2.0, x);
			}
			else
				matrix[x][y] = 0;
		}
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			if (x==y) {
				swap(&matrix[x][y], &matrix[x][4-y]);
			}
		}
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			printf("%d\t", matrix[x][y]);
		}
		printf("\n");
	}

	return 0;
}
