#include <stdio.h>
int arr1[10];  //�������� =>�Լ����� �����ϴ� ���� => �ʱ�ȭ x
int main(void) {
	//int num = 10;
	//int arr[num];    �����߻�! ������ ���̷� ���� �Ұ�

	int arr2[10];	  //main������ �����ϴ� ���� ����=> �ʱ�ȭ	

	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d \n", i , arr2[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d \n", i, arr1[i]);
	}

	return 0;

}