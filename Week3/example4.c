//Sum the numbers between 1-1400
#include <stdio.h>
int main() {
	int i;
	int sum = 0;
	for (i = 1; i <= 1400; i++) {
		sum = sum + i;
	}
	printf("Sum is %d\n", sum);
	return 0;
}
