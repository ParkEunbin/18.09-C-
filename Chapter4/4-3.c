//삼차원 배열 생성
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[3][3][3];
	int i, j, k;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				printf("a[%d][%d][%d] : ", i, j, k);
				scanf("%d", &a[i][j][k]);
			}
		}
	}
	printf("a= \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				printf("%d\t", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
/*
a[0][0][0] : 1
a[0][0][1] : 2
a[0][0][2] : 3
a[0][1][0] : 4
a[0][1][1] : 5
a[0][1][2] : 6
a[0][2][0] : 7
a[0][2][1] : 8
a[0][2][2] : 9
a[1][0][0] : 10
a[1][0][1] : 11
a[1][0][2] : 12
a[1][1][0] : 13
a[1][1][1] : 14
a[1][1][2] : 15
a[1][2][0] : 16
a[1][2][1] : 17
a[1][2][2] : 18
a[2][0][0] : 19
a[2][0][1] : 20
a[2][0][2] : 21
a[2][1][0] : 22
a[2][1][1] : 23
a[2][1][2] : 24
a[2][2][0] : 25
a[2][2][1] : 26
a[2][2][2] : 27
a =
1       2       3
4       5       6
7       8       9

10      11      12
13      14      15
16      17      18

19      20      21
22      23      24
25      26      27*/
