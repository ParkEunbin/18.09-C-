//3X3게임판
#define _CRT_SECURE_NO_WARNINGS
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
		printf("좌표입력:");
		scanf("%d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
	}
}
/*
좌표입력:1
	1
	|   |
	| X |
	|   |
	좌표입력 : 0
	0
	O |   |
	| X |
	|   |
	좌표입력 : 0
	1
	O | X |
	| X |
	|   |
	좌표입력 : 1
	2
	O | X |
	| X | O
	|   |
	좌표입력 : 2
	2
	O | X |
	| X | O
	|   | X
	좌표입력 : 2*/
