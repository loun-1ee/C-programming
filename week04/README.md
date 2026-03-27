# Week 02 - 자료형과 형식화된 입출력

**작성자:** 이로운  
**작성일:** 2026.03.26  
**수업:** C 프로그래밍 실습

---

## 실습 목표
1. C 프로그래밍 기본 구조
2. 변수와 상수
3. 자료형
4. 형식화된 입출력

---

## 파일 목록

### 실습 1 - `print_value.c`
상수와 변수의 출력  
`char`, `int`, `double`, `float` 자료형의 변수를 선언하고, 상수와 변수를 `printf`로 출력한다.

### 실습 2 - `dataSize.c`
sizeof 연산자를 이용한 자료형 크기 확인  
`sizeof` 연산자를 사용해 `char`, `int`, `short int`, `long int`, `float`, `double`, `long double` 등 각 자료형의 메모리 크기(바이트)를 출력한다.

### 실습 3 - `overflow.c`
오버플로우와 언더플로우 실습  
`unsigned char`, `short` 자료형에서 최대값을 초과할 때 발생하는 오버플로우와, `float` 자료형에서 최솟값 미만일 때 발생하는 언더플로우를 확인한다.

### 실습 4 - `printvalue.c`
변수 선언 및 값 저장 후 출력  
`age`, `salary`, `pi`, `grade`, `credit` 값을 각각 적절한 자료형(`short`, `long long`, `float`, `char`)의 변수에 저장하고, 알맞은 형식지정자로 출력한다.

### 실습 5 - `printfcost.c`
printf 필드 너비와 소수점 자리수 지정 출력  
`double` 변수 `cost`에 `172.53`을 저장하고, `%6.2f` 형식으로 소수점 둘째 자리까지 출력한다.

### 실습 6 - `boxVolume.c`
박스의 부피 계산 및 출력  
너비, 높이, 깊이를 `int` 변수로 선언하고 값을 저장한 뒤, 세 값을 곱해 부피를 계산하고 출력한다.

### 실습 7 - `scanfExample.c`
자료형에 따른 scanf 형식지정자 사용  
`short`, `long`, `unsigned` 자료형의 변수를 선언하고, 각각 `%hd`, `%ld`, `%u` 형식지정자로 사용자 입력을 받아 출력한다.
