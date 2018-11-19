//홀짝 반복문
#include <stdio.h>
int main(){
	int a=0;
	
	while(1){
		printf("그만 두려면 0를 입력\n");
		printf("a=");
		scanf("%d",&a);
		if (a==0){
			printf("종료.\n");
			break;}
		else if (a%2==0 ){
			printf("짝수임.\n");
			continue;}
		else if (a%2==1 ){
			printf("홀수임.\n");
			continue;}
		
	}
	return 0;

}
