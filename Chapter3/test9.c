//3�� ����̰ų� 5�� ����� ���� �����ϰ� ���

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