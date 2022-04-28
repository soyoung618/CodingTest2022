#include<stdio.h>
int main(void) {
	char s1[7][10] = { "한국","미국","일본","독일","호주","독일" };
	for (int i = 0; i < 6; i++) {
		if (s1[i] ==s1[i] ) {
			printf("%s", s1[i]);
		}
	}
	return 0;
}