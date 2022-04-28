#include <stdio.h>
int main(void) {
	/*char zero = '0';
	int n = zero - 48;
	printf("%d\n", zero);
	printf("%d\n", n);*/

	char s1[] = "COS PRO";
	char s2[10] = { 'k','o','r','e','a'};

	//s1 = "mirim high"; //문자열배열이름에 대입연산 불가

	printf("%s %d\n", s1, sizeof(s1));
	printf("%s %d\n", s2, sizeof(s2));

	//Char형 변수는 선언과 초기화를 동시에 해야한다
	//문자열 배열의 마지막은 항상'0'이 들어있어서 글자수가 7개라 하더라고 size는 8이다
	return 0;
}