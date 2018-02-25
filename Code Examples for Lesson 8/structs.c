# include <stdio.h>

void main(){
	int totalClasses = 0;
	double totalGPA = 0.0;
	struct Student *ptrJ, *ptrS;
	
	// structure definition
	struct Student{
		int nClasses;
		char *name;
		double gpa;
	};
	
	// structure declaration & initialization
	struct Student john = {3, .name = "John Doe", 3.0};
	struct Student sue = {2, "Sue Smith", .gpa = 3.5 };
	// reference pointers
	ptrJ = &john;
	ptrS = &sue;

	// print initial values of named data fields (accessing by dot operator)
	printf("\nName: %s\nClasses: %d\nGPA: %.1f\n", john.name, john.nClasses, john.gpa);
	printf("\nName: %s\nClasses: %d\nGPA: %.1f\n", sue.name, sue.nClasses, sue.gpa);
	
	// change values of named data fields (by dot operator)
	john.nClasses = 4;
	john.gpa = 3.8;
	sue.nClasses = 5;
	totalGPA = john.gpa + sue.gpa;
	// print new values of named data fields (accessing by dot operator)
	printf("\nName: %s\nClasses: %d\nGPA: %.1f\n", john.name, john.nClasses, john.gpa);
	printf("\nName: %s\nClasses: %d\nGPA: %.1f\n", sue.name, sue.nClasses, sue.gpa);
	printf("\nTotal GPA: %.1f\n", totalGPA);
			
	// change values of named data fields (by reference operator)
	ptrJ->gpa = 4.0;
	ptrJ->nClasses = 2;
	totalClasses = ptrJ->nClasses + ptrS->nClasses;
	ptrS->gpa = 4.0;
	// print new values of named data fields (accessing by reference operator)
	printf("\nName: %s\nClasses: %d\nGPA: %.1f\n", ptrJ->name, ptrJ->nClasses, ptrJ->gpa);
	printf("\nName: %s\nClasses: %d\nGPA: %.1f\n", ptrS->name, ptrS->nClasses, ptrS->gpa);
	printf("\nTotal classes: %d\n", totalClasses);
}