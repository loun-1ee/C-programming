#include <stdio.h>

int main() {

	double c = 0;
	double f = 0;

	printf("input c: ");
	scanf_s("%lf", &c);
	

	f = 32.0 + (c * 180.0 / 100.0);
	printf("C = %.1lf, F = %.1lf", c, f);

	return 0;
}