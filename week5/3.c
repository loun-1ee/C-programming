#include <stdio.h>

int main() {
	int height, r;
	double pi = 3.14;
	double v = 0.0;

	printf("input height: ");
	scanf_s("%d", &height);
	printf("input r: ");
	scanf_s("%d", &r);

	v = 1.0 / 3.0 * pi * (r * r) * height;
	printf("height : %d, r : %d, v : %.2f", height, r, v);

	return 0;
}