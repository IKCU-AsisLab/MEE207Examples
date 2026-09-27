//We can (better) approximate its value using taylor series expansion :
//pi = 4 - 4 / 3 + 4 / 5 - 4 / 7 + ....
#include <stdio.h>
int main() {
	int i;
	double pi = 0.0;
	for (i = 0; i < 1000000; i++) {
		if (i % 2 == 0) {
			pi = pi + (4.0 / (2 * i + 1));
		}
		else {
			pi = pi - (4.0 / (2 * i + 1));
		}
	}
	printf("Approximation of pi is %.20f\n", pi);
	return 0;
}
