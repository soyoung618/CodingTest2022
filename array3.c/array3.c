#include <stdio.h>

int main(void) {
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; i < 4; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	

	int arr2[3][4] = {0};
	printf("arr2�� ũ��: %d\n", sizeof(arr2));
	printf("arr2[0]�� ũ��: %d\n", sizeof(arr2[0]));
	printf("arr2[1]�� ũ��: %d\n", sizeof(arr2[1]));
	printf("arr2[2]�� ũ��: %d\n", sizeof(arr2[2]));
	printf("arr2[2][3]�� ũ��: %d\n", sizeof(arr2[2][3]));

	

	return 0;

}