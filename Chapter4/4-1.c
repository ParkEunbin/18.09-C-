/*점수를 받아서 총합 출력
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a[9];
	int b, i, sum = 0;
	for (i = 0; i < 10; i++) {
		printf("점수입력\n");
		scanf("%d", &b);
		a[i] = b;
		sum += a[i];
	}

	printf("총점:%d\n", sum);
	return 0;
}

점수입력
1
점수입력
2
점수입력
3
점수입력
4
점수입력
5
점수입력
6
점수입력
7
점수입력
8
점수입력
9
점수입력
10
총점:55*/