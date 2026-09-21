#include <stdio.h>

int addTwoNumbers(int a, int b)
{
	return a+b;
}

int main(void)
{
	int a = 5;
	int b = 90;
	int sum = 0;
	sum = addTwoNumbers(a,b);
	printf("When we add %d with %d we get %d",a,b,sum);
	return 0;
}
