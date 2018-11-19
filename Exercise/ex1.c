/*1.실수형 일차원 배열과 실수 a를 매개변수로 받아 배열에서 a보다 작은 수들의 합을 반환하는 함수를 작성하고 테스트 하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fun1(float* num, float a) {
	float sum = 0;
	int i;
	for (i = 0; i < 10; i++) {
		if (num[i] < a) {
			sum = sum + num[i];
		}
	}

	printf("합=%.2f", sum);

}
int main() {
	float a;
	float num[10];
	int i;
	for (i = 0; i < 10; i++) {
		printf("num[%d]=", i);
		scanf("%f", &num[i]);
	}
	printf("a값=");
	scanf("%f", &a);

	fun1(num, a);
}*/