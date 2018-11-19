#include <stdio.h>

int main(){
	int a;
	printf("숫자입력:");
	scanf("%d",&a);

	if (a%2==0)
		printf("짝수입니다.\n");
	else 
		printf("홀수입니다.\n");
}