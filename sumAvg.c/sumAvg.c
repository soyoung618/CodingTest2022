/*1. 배열(길이10)에 임의의 정수(rand()함수사용)를 저장하고
      그 합과 평균을 구하는 코드를 작성해보자.
   2. 이때 임의의 정수는 1~100의 값으로 지정한다
   3.저장/ 합계/ 평균을 구하는 과정을 분리하여 코딩하는 습관을 기르자
   4.1~100  rand()%100+1*/
#include <stdio.h>

int main(void) {
	//초기화
	int arr[10] = { 0 };
	int sum = 0;
	double avg =0;
	//수의 발생 및 저장
	for (int i = 0; i <= 10; i++)
	{
		arr[1] = rand() % 100 + 1;  // rand 함수 사용, 큰 숫자를 가지고 온다
	}
	//합계
	for (int i = 0; i <= 10; i++) {
		sum += arr[1];
	}
	//평균
	avg = (double)sum / 10;
	printf("합계:%d\n", sum);
	printf("평균:%lf\n", avg);
	

	return 0;

}