#include <stdio.h>

int main() {
	int a[] = {'P', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't', '.'};
	int b[5][10] = { {'A'}, {'A', 'B', 'C'}, {'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E', 'F', 'G'}, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'} };

	// 1번 출력결과
	printf("< 1번 출력 결과 > ");
	for (int i = 0; i < 23; i++) {
		printf("%c", a[i]);
	}
	printf("\n");

	// 2번 출력결과
	/*printf("< 2번 출력 결과 > ");
	for (int i = 0; i < 23; i++) {
		for (int j = 0; j < a[i + 1]; j++) {
			printf("%c", a[j]);
		}
	}*/

	/*int t[] = {'0'};
	int tmp;
	printf("< 2번 출력 결과 >");
	for (int i = 0; i < 23; i++) {
			a[i] = t[i];
			t[i] = tmp;
			tmp = a[i];
			printf("%c", a[i]);
	*/

}