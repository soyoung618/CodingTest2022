#include <stdio.h>
int main(void) {
	int arr[10];
	printf("arr�迭�� ũ�� : %d byte \n", sizeof(arr));
	printf("arr�迭 ����� ũ�� : %d byte \n", sizeof(arr[0]));
	printf("arr�迭�� ���� : %d \n", sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	 }

	return 0;

}