//구구단
#include <stdio.h>
int main(){
	int a=0,b=0;

	for (a=1;a<=9;a++){
		for (b=1;b<=9;b++){
			printf("%d*%d=%d ",a,b,a*b);
		}
		printf("\n");
	}
	return 0;
}
