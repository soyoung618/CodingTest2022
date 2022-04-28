#include <stdio.h>
int main(void) {
	char s1[20] = { "codig test" };
	char s2[20];
	int i = 0;
	//길이 구하기 x,복사
	for (i = 0; s1[i] !=0; i++) {
		s2[i] = s1[i];
		
	}
	s2[i] = 0;
	printf("복사본 : % s", s2);

	return 0;
}
