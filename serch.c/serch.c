#include <stdio.h>
int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int num = rand() %10+1;
	//int i;
	int num, i;
	printf("���ڸ� �Է� �ϼ���:");
	scanf("%d",&num);
	for (i = 0; i <10; i++) {
		if (num == arr[i]) {
			break; //i�� �ش� �ε����� ����� ä break ;
		}
	}
	if (i < 10) {
		printf("%d��° ��", i);
	}
	else {
		printf("����.");
	}
	

	return 0;
}