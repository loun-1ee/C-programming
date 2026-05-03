#include <stdio.h>

int getIncomeTax(int a);
int getLocalinHabitantsTax(int a);
int getInsurance(int a);
int printResult(int a, int b, int c, int d);

int main() {

	int money, x, y, z, k;

	printf("급여: ");
	scanf_s("%d", &money);

	x = getIncomeTax(money);
	y = getLocalinHabitantsTax(x);
	z = getInsurance(money);

	printResult(money, x, y, z);
}

int getIncomeTax(int a) {
	int x;
	x = a / 10;
	return x;
}

int getLocalinHabitantsTax(int a) {
	int y;
	y = a / 10;
	return y;
}

int getInsurance(int a) {
	int z;
	z = a * 0.0589;
	return z;
}

int printResult(int a, int b, int c, int d) {
	printf("총급여(+): %d(원)\n", a);
	printf("소득세(-): %d(원)\n", b);
	printf("주민세(-): %d(원)\n", c);
	printf("보험료(-): %d(원)\n", d);
	printf("지급액: %d(원)", a - b - c - d);
}