/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void change(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("a=%d, b=%d", a, b);
}

int main() {
	int a, b;
	printf("a입력:");
	scanf("%d", &a);
	printf("b입력:");
	scanf("%d", &b);
	change(a, b);

	return 0;
}

a입력:5
	b입력 : 7
	a = 7, b = 5*/