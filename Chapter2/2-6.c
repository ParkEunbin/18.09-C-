//a++과 ++a의 차이
#include <stdio.h>

int main () {
	int a=1, b;
	b=a++;
	printf("b=%d, a=%d",b,a);
	b=++a;
	printf("b=%d, a=%d",b,a);

	return 0;
}
