#include <stdio.h>
int main(void) {
	int age = 45;
	char grade = 'A';
	char name[] = "Aaron";

	printf("I'm %d years old.\n", age);
	printf("I want a %c grade.\n", grade);
	printf("\tI want a %c grade.\n", grade);
	return 0;
} 