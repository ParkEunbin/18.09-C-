//삼항 논리연산자
#include <stdio.h>
int main (){
	int a, b;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);

	(a<b)?printf("b가 a보다 큼\n"):printf("a가 b보다 크거나 같음\n");

	system("pause");
	return 0;
}
