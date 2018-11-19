//3의 배수이거나 5의 배수인 수를 제외하고 출력

#include <stdio.h>
int main(){
	int a=0;
	while(a<=100)
		if ((a%3==0) || (a%5==0)){
			a=a+1;}
		else {
			printf("%d\n",a);
			a=a+1;}
		
	return 0;

}
