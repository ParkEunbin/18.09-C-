/*������ �޾Ƽ� ���� ���
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a[9];
	int b, i, sum = 0;
	for (i = 0; i < 10; i++) {
		printf("�����Է�\n");
		scanf("%d", &b);
		a[i] = b;
		sum += a[i];
	}

	printf("����:%d\n", sum);
	return 0;
}

�����Է�
1
�����Է�
2
�����Է�
3
�����Է�
4
�����Է�
5
�����Է�
6
�����Է�
7
�����Է�
8
�����Է�
9
�����Է�
10
����:55*/