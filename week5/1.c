#include <stdio.h>

int main() {
	int width, height;

	printf("input width: ");
	scanf_s("%d", &width);
	printf("input height: ");
	scanf_s("%d", &height);

	printf("width: %d, height: %d, area: %d", width, height, width * height);
	
	return 0;
}