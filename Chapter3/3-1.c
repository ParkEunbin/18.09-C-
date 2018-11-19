//홀짝판단하기
#include <stdio.h>
int main (){
	int a;
	printf("a=");
	scanf("%d",&a);

	if (a%2==0)
		printf("%d는 짝수입니다.\n",a);
	else
		printf("%d는 홀수입니다.\n",a);
	
	return 0;
}
