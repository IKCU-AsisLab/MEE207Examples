#include <stdio.h>

// function main begins program execution
int main(void) {
	printf("Enter two integers, and I will tell you\n");
	printf("the relationships they satisfy: ");

	int number1 = 0; // first number to be read from user
	int number2 = 0; // second number to be read from user

	scanf("%d %d", &number1, &number2); // read two integers

	if (number1 == number2) {
		printf("%d is equal to %d\n", number1, number2);
	} // end if

	if (number1 != number2) {
		printf("%d is not equal to %d\n", number1, number2);
	} // end if

	if (number1 < number2) {
		printf("%d is less than %d\n", number1, number2);
	} // end if

	if (number1 > number2) {
		printf("%d is greater than %d\n", number1, number2);
	} // end if

	if (number1 <= number2) {
		printf("%d is less than or equal to %d\n", number1, number2);
	} // end if

	if (number1 >= number2) {
		printf("%d is greater than or equal to %d\n", number1, number2);
	} // end if
} // end function main
