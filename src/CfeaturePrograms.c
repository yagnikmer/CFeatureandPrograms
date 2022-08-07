#include <stdio.h>
#include <string.h>

struct Students {
	int roll_no;
	char name[50];
	char surname[50];
	char collage[50];
};

int main() {
	struct Students stud1;

	stud1.roll_no = 21;
	strcpy(stud1.name, "yagnik");
	strcpy(stud1.surname, "mer");
	strcpy(stud1.collage, "Marwadi university");

	printf("Student roll no. : %d\n", stud1.roll_no);
	printf("Student name : %s\n", stud1.name);
	printf("Student surname : %s\n", stud1.surname);
	printf("Student collage : %s\n", stud1.collage);

	return 0;
}

//Student roll no. : 21
//Student name : yagnik
//Student surname : mer
//Student collage : 6422252
