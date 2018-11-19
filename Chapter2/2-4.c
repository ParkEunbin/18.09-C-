//Shift연산
#include <stdio.h>
int main () {
	int a,b;
	printf("a=");
	scanf("%d",&a);
	b=a<<2;
	printf("a<<2는 %08x(%d)\n",b,b);

	b=a>>2;
	printf("a>>2 %08x(%d)\n",b,b);

	return 0;
}
