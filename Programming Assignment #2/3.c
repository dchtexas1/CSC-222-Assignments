#include <stdio.h>

int main(int argc, char const *argv[]) {
	struct Student *ptrJ, *ptrS, *ptrK, *ptrM, *ptrL;
	struct Courses *ptrZ, *ptrY, *ptrX;

	// structure definition
	struct Student{
		int nClasses;
		char *name;
		int id;
		int grade[5]; // array of grades
		float gpa;
	};

	struct Courses {
		char *name;
		int cNumber;
		char *iName;
	};

	// structure declaration & initialization
	struct Student john = { .nClasses =5, .name = "John Doe", .id = 551227, .gpa =2.4, .grade = {70, 69, 82, 100, 74} };
	struct Student sue = { .nClasses = 5, .name = "Sue Smith", .id = 551897, .gpa = 3.7, .grade = {88, 92, 94, 73, 84} };
	struct Student kyle = { .nClasses = 5, .name = "Kyle Burns", .id = 551001, .gpa = 4.0, .grade = {90, 98, 100, 96, 88} };
	struct Student molly = { .nClasses = 5, .name = "Molly Witherspoon",.id = 551487, .gpa = 1.6, .grade = {26, 56, 7, 90, 72} };
	struct Student leo = { .nClasses = 5, .name = "Leo Mann", .id = 551693 , .gpa = 3.2, .grade = {67, 88, 90, 76, 82}};

	struct Courses math = {.name = "Math", .cNumber = 242, .iName = "Professor Whisker Bottom"};
	struct Courses english = {.name = "English", .cNumber = 101, .iName = "Professor Player One"};
	struct Courses compsci = { .name = "Computer Science", .cNumber = 222, .iName = "Professor Alexander Anderson"};

	// reference pointers
	ptrJ = &john;
	ptrS = &sue;
	ptrK = &kyle;
	ptrM = &molly;
	ptrL = &leo;

	ptrZ = &math;
	ptrY = &english;
	ptrX = &compsci;

	int i;

	printf("===================Students===================\n");


	// print initial values of named data fields (accessing by dot operator)
	printf("\nStudent Name: %s\nID: %d \nClasses: %d\nGPA: %.1f\n", john.name, john.id, john.nClasses, john.gpa);
	printf("Grades: ");
	for(i = 0; i < 5; i++)
	{
		printf("(%d) ", john.grade[i]);
	}
	printf("\n\nStudent Name: %s\nID: %d \nClasses: %d\nGPA: %.1f\n", sue.name, sue.id, sue.nClasses, sue.gpa);
	printf("Grades: ");
	for(i = 0; i < 5; i++)
	{
		printf("(%d) ", sue.grade[i]);
	}
	printf("\n\nStudent Name: %s\nID: %d \nClasses: %d\nGPA: %.1f\n", kyle.name, kyle.id, kyle.nClasses, kyle.gpa);
	printf("Grades: ");
	for(i = 0; i < 5; i++)
	{
		printf("(%d) ", kyle.grade[i]);
	}
	printf("\n\nStudent Name: %s\nID: %d \nClasses: %d\nGPA: %.1f\n", molly.name, molly.id, molly.nClasses, molly.gpa);
	printf("Grades: ");
	for(i = 0; i < 5; i++)
	{
		printf("(%d) ", molly.grade[i]);
	}
	printf("\n\nStudent Name: %s\nID: %d \nClasses: %d\nGPA: %.1f\n", leo.name, leo.id, leo.nClasses, leo.gpa);
	printf("Grades: ");
	for(i = 0; i < 5; i++)
	{
		printf("(%d) ", leo.grade[i]);
	}

	printf("\n\n===================Classes=================== \n");

	printf("\nClass Name: %s\nClass Number: %d\nInstructor Name: %s\n", math.name, math.cNumber, math.iName);
	printf("\nClass Name: %s\nClass Number: %d\nInstructor Name: %s\n", english.name, english.cNumber, english.iName);
	printf("\nClass Name: %s\nClass Number: %d\nInstructor Name: %s\n", compsci.name, compsci.cNumber, compsci.iName);

}
