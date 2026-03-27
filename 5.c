/* file: printcost.c
	cost 값을 출력하는 프로그램
*/
#include <stdio.h>

int main() {

	double cost;

	cost = 172.53;

	printf("The sales total is: $\t %6.2f", cost);
	// print("The sales total is: $\t %6f", cost);

	return 0;
}