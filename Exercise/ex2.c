//정수형 일차원 배열을 매개 변수로 받아 배열에서 평균보다 작은 수들의 개수를 반환하는 함수를 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int aver(int a[10]);
	int num[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("num[%d]=", i);
		scanf("%d", &num[i]);
	}

	printf("갯수:%d", aver(num));
}

int aver(int* a) {
	float sum = 0;
	int i;
	int count = 0;

	float average;

	for (i = 0; i < 10; i++) {
		sum = sum + a[i];
	}
	average = sum / 10;
	for (i = 0; i < 10; i++) {
		if (a[i] < average) {
			count = count + 1;
		}
	}
	return count;
}
