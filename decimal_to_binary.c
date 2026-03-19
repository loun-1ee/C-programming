#include <stdio.h>

//10진수 -> 2진수 변환

void print_binary(int n) {
    if (n == 0) { printf("0"); return; }
    int bits[32];
    int count = 0;
    while (n > 0) {
        bits[count++] = n % 2; // 나머지 저장 (% = 나머지 연산)
        n /= 2; // 2로 나누기
    }
    for (int i = count - 1; i >= 0; i--)
        printf("%d", bits[i]);
}


int main() {
    int num;

    printf("10진수 입력: ");
    scanf_s("%d", &num); //키보드로 숫자 입력받기

    printf("2진수: ");
    print_binary(num);
    printf("\n");

    return 0;
}
