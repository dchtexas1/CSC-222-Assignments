# include <stdio.h>
void main(){
	// structure definition
	struct Student{
		int nClasses;
		char *name;
		double grades[3]; // array of grades
		double gpa;
	} john;

	john.nClasses = 3;
	john.name = "John Doe";
	john.grades[0] = 75.0;
	john.grades[1] = 95.6;
	john.grades[2] = 100.0;
	john.gpa = 3.0;
	
	for (int i=0; i<3; i++)
		printf("%.1f\n",john.grades[i]);
	
}