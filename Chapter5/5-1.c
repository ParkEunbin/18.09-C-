/*�迭 ���� �ձ��ϱ�
#include<stdio.h>
int sumarray(int Array[], int Size) {
	int i, result = 0;
	for (i = 0; i < Size; i++) {
		result += Array[i];
	}
	return result;
}

int main() {
	int a[] = { 2,3,4 };
	int result = 0;
	result = sumarray(a, 3);

	printf("�հ�:%d\n", result);
	return 0;
}

//�հ�:9*/