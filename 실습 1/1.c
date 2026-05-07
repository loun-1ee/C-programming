#include <stdio.h>

int isEven(int value) {
	if (value % 2 == 0) {
		return 1; // Even
	}
	else {
		return 0; // Odd
	}
}

int main() {

	int num1 = 0;

	printf("int value: ");
	scanf_s("%d", &num1);

	if (isEven(num1)) {
		printf("%d is even.\n", num1);
	}
	else {
		printf("%d is odd.\n", num1);
	}
	return 0;
}