#include <stdio.h>

int main() {

	int num1, num2, menu;

	printf("input values: ");
	scanf_s("%d %d", &num1, &num2);

	printf("menu\n");
	printf("1. min\n");
	printf("2. max\n");
	printf("3. sum\n");
	printf("4. average\n");
	printf("5. end\n");
	printf("select menu: ");
	scanf_s("%d", &menu);
	
	switch (menu) {
	case 1:
		if (num1 < num2) {
			printf("min: %d", num1);
		}
		else {
			printf("min: %d", num2);
		}
		return 0;
	case 2:
		if (num1 > num2) {
			printf("max: %d", num1);
		}
		else {
			printf("max: %d", num2);
		}
		return 0;
	case 3:
		printf("sum: %d", num1 + num2);
		return 0;
	case 4:
		printf("average: %d", (num1 + num2) / 2);
		return 0;
	case 5:
		printf("end");
		return 0;
	default:
		printf("error");
		return 0;
	}
}