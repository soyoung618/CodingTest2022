#include <stdio.h>
int arr1[10];  //전역변수 =>함수들이 공유하는 변수 => 초기화 x
int main(void) {
	//int num = 10;
	//int arr[num];    에러발생! 변수는 길이로 지정 불가

	int arr2[10];	  //main에서만 동작하는 지역 변수=> 초기화	

	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d \n", i , arr2[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d \n", i, arr1[i]);
	}

	return 0;

}