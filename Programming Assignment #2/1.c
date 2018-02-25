#include <stdio.h>

int main() {
	int mat[5][5];
	int x, y;

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			if (y==x) {
				mat[x][y] = (x+1)*(y+1);
			}
			else
				mat[x][y] = 0;
		}
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			printf("%d\t", mat[x][y]);
		}
		printf("\n");
	}

	return 0;
}
