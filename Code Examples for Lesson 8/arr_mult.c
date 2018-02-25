/* Display a matrix as shown below, by using two dimensional array
	0		1		1		1
	-1		0		1		1
	-1		-1		0		1
	-1		-1		-1		0										*/

# include <stdio.h>
void main(){
	int matrix[4][4];
	int i, j;
	// assign values to matrix
	for (i=0; i<4; i++)
		for (j=0; j<4; j++){
			// diagonal 0s
			if(i==j)
				matrix[i][j] = 0;
			// above diagonal 1s
			else if(i<j)
				matrix[i][j] = 1;
			// below diagonal -1s
			else
				matrix[i][j] = -1;
		}

	// display array
	for (i=0; i<4; i++){
		for (j=0; j<4; j++)
			printf("%d\t", matrix[i][j]);
		printf("\n");
	}
}
