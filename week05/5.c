#include <stdio.h>

main() {
	double pyeong = 0;
	double m2 = 0;

	printf("input pyeong: ");
	scanf_s("%lf", &pyeong);

	m2 = pyeong * 3.3;

	printf("%.1f pyeong = %.1f m²", pyeong, m2);

	return 0;
}