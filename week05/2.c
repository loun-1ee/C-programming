#include <stdio.h>

int main() {
	int x = 2, y = 3;
	double z = 2.4;
	double result = 0.0;

	result = x++ + y++ + z;
	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %f\n", z);
	printf("x : %d, y : %d, z : %f, result : %.1f\n", x, y, z, result);
	printf("\n\n");

	result = ++x + y / 2 * 2 - (int)z;
	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %f\n", z);
	printf("x : %d, y : %d, z : %f, result : %.1f\n", x, y, z, result);
	printf("\n\n");

	result = (int)z - (x + (int)z) % 2 + 4.0;
	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %f\n", z);
	printf("x : %d, y : %d, z : %f, result : %.1f\n", x, y, z, result);
	printf("\n\n");

	result = x * 6 - 2 * (3 + z) + y;
	printf("x : %d\n", x);
	printf("y : %d\n", y);
	printf("z : %f\n", z);
	printf("x : %d, y : %d, z : %f, result : %.1f\n", x, y, z, result);
	printf("\n\n");
	
	return 0;
}