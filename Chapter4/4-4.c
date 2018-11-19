//알파벳 출력
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 26
int main() {
	int i;
	char alpa[size];
	for (i = 0; i < 26; i++) {
		alpa[i] = 'a' + (i);
	}
	printf("alpabet={");
	for (i = 0; i < 26; i++) {
		if (i == 25) {
			printf("%c", alpa[i]);
		}
		else
			printf("%c, ", alpa[i]);
	}
	printf("}\n");

	return 0;
}

//alpabet = { a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z }
