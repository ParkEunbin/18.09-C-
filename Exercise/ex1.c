/*1.�Ǽ��� ������ �迭�� �Ǽ� a�� �Ű������� �޾� �迭���� a���� ���� ������ ���� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ �Ͻÿ�.
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

	printf("��=%.2f", sum);

}
int main() {
	float a;
	float num[10];
	int i;
	for (i = 0; i < 10; i++) {
		printf("num[%d]=", i);
		scanf("%f", &num[i]);
	}
	printf("a��=");
	scanf("%f", &a);

	fun1(num, a);
}*/