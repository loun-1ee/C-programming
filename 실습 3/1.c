#include <stdio.h>

double getVolume(double a, double b);
double printResult(double a);

int main() {
	int h = 0, r = 0;
	double v = 0;

	printf("원뿔의 높이: ");
	scanf_s("%d", &h);

	printf("반지름: ");
	scanf_s("%d", &r);

	v = getVolume(h, r);
	printResult(v);
}

double getVolume(double h, double r)
{
	double v = 1.0 / 3.0 * 3.14 * r * r * h;
	return v;
}

double printResult(double a) {
	printf("원뿔의 부피: %lf", a);
}