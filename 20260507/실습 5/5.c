#include <stdio.h>

int main() {

	float height, weight;

	printf("input height value: ");
	scanf_s("%f", &height);

	printf("input weight value: ");
	scanf_s("%f", &weight);

	float bmi = weight / ((height / 100) * (height / 100));

	printf("your bmi: %f\n", bmi);

	if (bmi < 20) {
		printf("normal weight");
	}
	else if (bmi < 30 && bmi >= 20) {
		printf("over weight");
	}
	else if (bmi < 50 && bmi >= 30) {
		printf("obese");
	}
	else if (bmi >= 50) {
		printf("extremely obese");
	}
}