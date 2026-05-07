#include <stdio.h>

int main() {

	int num1 = 0;

	printf("input value: ");
	scanf_s("%d", &num1);

	if (num1 > 0) {
		printf("%d is positive.\n", num1);
	}
	else if (num1 < 0) {
		printf("%d is negative.\n", num1);
	}
	else {
		printf("The value is zero.\n");
	}
}