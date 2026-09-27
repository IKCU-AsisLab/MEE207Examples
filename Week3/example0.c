#include<stdio.h>

int main() {
	int grade;
	printf("Enter your grade: ");
	scanf("%d", &grade);

	if (grade >= 70) {
		printf("You passed!\n");
	}

	return 0;
}
