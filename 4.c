/* file: printvalue.c
	값에 적정한 변수를 만들고 값을 저장한 후 변수값을 출력하는 프로그램
*/
#include <stdio.h>

int main() {

	short age = 128;
	long long salary = 2500000000;
	float pi = 3.14f;
	char grade = 2;
	char credit = 'A';

	printf("age = %hd\n", age);
	printf("salary = %11d\n", salary);
	printf("pi= %f\n", pi);
	printf("grade = %d\n", grade);
	printf("credit = %c", credit);

	return 0;
}