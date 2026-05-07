#include <stdio.h>

int main()
{

	float x;

	printf("input x value: ");
	scanf_s("%f", &x);

	if (x <= 0) {
		printf("f(x) result: %f", x * x * x - 9 * x + 2);
	}
	else if (x > 0) {
		printf("f(x) result: %f", 7 * x + 2);
	}
}