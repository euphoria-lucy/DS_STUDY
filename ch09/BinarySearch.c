#include <stdio.h>

int binarySearch(int a[], int n, int key) {
	int left = 0, right = n - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key > a[mid]) left = mid + 1;
		else if (key < a[mid]) right = mid - 1;
		else return mid;
	}
	return -1;
}

int main(void) {
	int i, key, index, n;
	int a[] = { 2, 3, 4, 6, 7, 10, 30, 51, 65, 95 };
	n = sizeof(a) / sizeof(int);
	printf("찾을 대상 : ");
	for (i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}
	printf("\n찾을 값 : ");
	scanf_s("%d", &key);
	index = binarySearch(a, n, key);
	if (index >= 0) printf("\n%d을(를) %d에서 찾음! \n", key, index);
	else printf("\n찾고자 하는 값이 없음!\n");
	return 0;
}
