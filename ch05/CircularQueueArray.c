#include <stdio.h>
#define SIZE 6

int cqueue[SIZE];
int rear = -1, front = 0;
int cnt = 0;

int add(int data) {
	if (cnt == SIZE) {
		printf("Circular Queue is full! \n");
		return -1;
	}
	cnt++;
	cqueue[++rear % SIZE] = data;

	return 0;
}

int delete(void) {
	if (cnt == 0) {
		printf("Circular Queue is Empty!\n");
		return -1;
	}

	cnt--;
	// front 1증가는 delete() 호출문 종료 직후
	return cqueue[front++ % SIZE];
}

int main(void) {
	add(10);
	add(20);
	add(30);
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	add(40);
	add(50);
	add(60);
	add(70); // overflow 발생
	add(80);
	add(90);
	add(100); // add 안됨

	return 0;
}