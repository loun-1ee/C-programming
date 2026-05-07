#include <stdio.h>

int main() {

	int num1, num2;

	printf("input value 1:");
	scanf_s("%d", &num1);
	printf("input value 2:");
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("%d is greater than %d.\n", num1, num2);
	}
	else if (num1 < num2) {
		printf("%d is less than %d.\n", num1, num2);
	}
}