#include <stdio.h>
int main(void) {
	char s1[20] = { "codig test" };
	char s2[20];
	//길이 구하기
	int cnt = 0;
	while (s1[cnt] != '\0') {
		cnt++;
	}
	//복사
	for (int i = 0; i <= cnt; i ++) {
		s2[i] = s1[i];
	}
	printf("복사본 : % s", s2);
	return 0;
}