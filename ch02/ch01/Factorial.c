#include <stdio.h>

// 팩토리얼을 재귀호출로 구하기

int factorial(int n) {
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main(void) {
	int n = 5;

	printf("%d != %d\n", n, factorial(n));
}