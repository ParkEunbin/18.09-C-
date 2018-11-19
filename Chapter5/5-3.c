/*#include <stdio.h>
int gval = 0;
void sum();
int main() {
	int lval = 0;

	sum();
	sum();
	sum();
	sum();
	sum();

	return 0;

}
void sum() {
	int lval = 0;
	gval++;
	lval++;
	printf("전역변수:%d\n", gval);
	printf("지역변수:%d\n", lval);
}


전역변수:1
	지역변수 : 1
	전역변수 : 2
	지역변수 : 1
	전역변수 : 3
	지역변수 : 1
	전역변수 : 4
	지역변수 : 1
	전역변수 : 5
	지역변수 : 1*/