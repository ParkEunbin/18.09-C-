#include <stdio.h>
#include <string.h>
struct score{
	int num;
	char name[10];
	double grade;
};
int main(){
	int i;
	for (i=0;i<3;i++){
		int a;
		char b[10];
		double c;
		struct score s;
		printf("학번,이름,학점입력:");
		scanf("%d",&a);
		scanf("%s",&b);
		scanf("%lf",&c);
		s.num=a;
		strcpy(s.name,b);
		s.grade=c;
		printf("학번:%d,이름:%s,학점:%.1f \n",s.num,s.name,s.grade);
	
	}
	return 0;
}