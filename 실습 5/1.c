#include <stdio.h>
// random 함수 사용
#include <time.h> // time()
#include <stdlib.h> // rand()

int main() {
	int result = 0;
	int randomValue = 0;

	srand(time(NULL)); 
	printf("정수 입력(1 ~ ): ");
	scanf_s("%d", &randomValue);

	// rand() % randomValue + 1;

	result = getRand(randomValue);
	printf("랜덤값: %d", result);
}