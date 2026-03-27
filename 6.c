/*
박스의 부피를 구하는 프로그램
*/

#include <stdio.h>

int main() {

	int width = 2;
	int height = 3, length = 2;
	int volume = 0;

	volume = width * height * length;

	printf("너비 %d 높이%d 깊이 %d의 부피는 %d입니다.\n", width, height, length, volume);

	return 0;
}