#include <stdio.h>

double getAverage(double a, double b);
double printResult(double result);

int  main(void)
{
	float num1, num2, result;
	printf("두 실수형을 입력하세요: ");
	scanf_s("%f %f", &num1, &num2);

	result = getAverage(num1, num2);
	printResult(result);

	return 0;
}

double getAverage(double a, double b) {
	double result = (a + b) / 2.0;
	return result;
}

double printResult(double result) {
	printf("두 실수의 평균: %lf\n", result);
}