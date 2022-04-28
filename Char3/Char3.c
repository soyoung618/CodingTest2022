#include <stdio.h>
int main(void) {
	char s1[30] = { "coding test exercise" };
	int cnt = 0;
	//s1의 길이 =>while
	//널 표시 ==, =='\0'
	while (s1[cnt] != '\0') {
		cnt++;
	}
	printf(",문자열의 길이 : %d",cnt );
	printf("\n");
	cnt = 0;
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break;
		cnt++;
	}
	printf("문자열의 길이:%d", cnt);
	return 0;
}