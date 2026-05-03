#include <stdio.h>
#include <math.h>

main() {
	double a, b, c;
	double D, x1, x2;

    printf("ax^2 + bx + c = 0\n");
    printf("input a b c: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    printf("D = %.2f\n", D);

    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}