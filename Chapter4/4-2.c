//이차원 배열 생성
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[3][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("a= \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
/*
a[0][0] : 1
a[0][1] : 2
a[0][2] : 3
a[1][0] : 4
a[1][1] : 5
a[1][2] : 6
a[2][0] : 7
a[2][1] : 8
a[2][2] : 9
a =
1       2       3
4       5       6
7       8       9*/
