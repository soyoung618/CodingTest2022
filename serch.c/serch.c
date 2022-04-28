#include <stdio.h>
int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int num = rand() %10+1;
	//int i;
	int num, i;
	printf("숫자를 입력 하세요:");
	scanf("%d",&num);
	for (i = 0; i <10; i++) {
		if (num == arr[i]) {
			break; //i에 해당 인덱스가 저장된 채 break ;
		}
	}
	if (i < 10) {
		printf("%d번째 방", i);
	}
	else {
		printf("없다.");
	}
	

	return 0;
}