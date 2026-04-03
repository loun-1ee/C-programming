#include <stdio.h>

int main() {

	int age = 19;
	char gender = 'm';
	int com = 100, eng = 60, math = 90;
	int sum = 210, avg = 70;
	int value = 100, count = 5;
	int year = 2022;
	int input = 12;

	printf("age >= 19, male: %d\n", age >= 19 && gender == 'm');
	printf("computer, english, math >= 90: %d\n", com >= 90 && eng >= 90 && math >= 90);
	printf("sum >= 200 or avg >= 60: %d\n", sum >= 200 || avg >= 60);
	printf("value < 60 or count >= 4: %d\n", value < 60 || count >= 4);
	printf("year: %d\n", year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	printf("input%2==0: %d\n", input % 2 == 0);
	printf("input%3,5==0: %d\n", input % 3 == 0 && input % 5 == 0);

}