#include <stdio.h>

// ���丮���� ���ȣ��� ���ϱ�

int factorial(int n) {
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main(void) {
	int n = 5;

	printf("%d != %d\n", n, factorial(n));
}