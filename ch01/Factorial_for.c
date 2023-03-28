#include <stdio.h>

// 팩토리얼 - for로 함

int main(void) {
	int n = 5, factorial = 1, i;

	for (i = n; i >= 1; i--) {
		factorial *= i;
	}

	printf("%d != %d\n", n, factorial);

	return 0;
}