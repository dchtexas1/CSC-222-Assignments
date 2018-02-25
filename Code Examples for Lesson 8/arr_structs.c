# include <stdio.h>
void main(){
	// structure definition
	struct Student{
		char *name;
		int nClasses;
		double grades[3]; // array of grades
		double gpa;
	} students[3]; // array of students

	students[0].name = "Sarah Jones";
	students[0].nClasses = 4; 
	students[0].grades[0] = 89.3;
	students[0].grades[1] = 98.7;
	students[0].grades[2] = 77.2;
	students[0].gpa = 3.8;

	students[1].name = "Bill Wilson";
	students[1].nClasses = 2; 
	students[1].grades[0] = 75.3;
	students[1].grades[1] = 80.0;
	students[1].grades[2] = 95.7;
	students[1].gpa = 3.5;
	
	students[2].name = "Michael Smith";
	students[2].nClasses = 3; 
	students[2].grades[0] = 99.3;
	students[2].grades[1] = 95.0;
	students[2].grades[2] = 96.7;
	students[2].gpa = 4.0;

	for (int i=0; i<3; i++){
		printf("\nName: %s\nClasses: %d\nGPA: %.1f\n",students[i].name, students[i].nClasses, students[i].gpa);
		for (int j=0; j<3; j++)
			printf(" Grade %d: %.1f\n",j+1, students[i].grades[j]);
	}
}