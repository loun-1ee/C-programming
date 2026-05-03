#include <stdio.h>

long long factorial();

int main() {
	int number = 0;
	long long fact = 0;

	printf("계산할 팩토리얼 크기: ");
	scanf_s("%d", &number);
	fact = factorial(number);

	printf("1부터 %d 까지의 팩토리얼 값은: %lld 입니다.", number, fact);

	return 0;
}