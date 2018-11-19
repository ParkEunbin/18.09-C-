//동전 판단기
#include <stdio.h>
int main (){
	int a;
	printf("숫자입력:");
	scanf("%d",&a);
	
	switch(a){
	case 1:
		printf("%d원 넣었음.\n",a);
		break;
	case 2:
		printf("%d원 넣었음.\n",a);
		break;
	case 3:
		printf("%d원 넣었음.\n",a);
		break;
	default:
		printf("기타동전.\n");
	}
	return 0;
}
