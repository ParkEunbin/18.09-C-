/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 26
int main() {
	int board[3][3];
	int x, y, k, i;
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++) {
			board[x][y] = '  ';
		}
	}
	for (k = 0; k < 9; k++) {
		printf("ÁÂÇ¥ÀÔ·Â:");
		scanf("%d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
	}
}

ÁÂÇ¥ÀÔ·Â:1
	1
	|   |
	| X |
	|   |
	ÁÂÇ¥ÀÔ·Â : 0
	0
	O |   |
	| X |
	|   |
	ÁÂÇ¥ÀÔ·Â : 0
	1
	O | X |
	| X |
	|   |
	ÁÂÇ¥ÀÔ·Â : 1
	2
	O | X |
	| X | O
	|   |
	ÁÂÇ¥ÀÔ·Â : 2
	2
	O | X |
	| X | O
	|   | X
	ÁÂÇ¥ÀÔ·Â : 2*/