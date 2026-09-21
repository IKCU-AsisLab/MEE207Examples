#include <stdio.h>
// This function Adds two integers
// parameter a is the first integer to sum
// parameter b is the second integer returns sum of a&b

int addTwoNumbers(int a, int b)
{
	return a+b;
}

int main(void)
{
	//Notice that we defined a, b and, c in single line without a value.
	int a,b,c;
	printf("Please enter the first number :");
	scanf("%d",&a);

	printf("Please enter the second number :");
	scanf("%d",&b);

	c = addTwoNumbers(a,b);
	printf("When we add %d with %d we get %d",a,b,c);
	return 0;
}
