//팩토리얼 함수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int factorial(int n) {
	if (n <= 1)
		return (1);
	else
		return(n*factorial(n - 1));
}
int main() {
	int facto = 0;
	int n;
	scanf("%d", &n);
	facto = factorial(n);
	printf("%d", facto);

	return 0;

}

/*6
720*/