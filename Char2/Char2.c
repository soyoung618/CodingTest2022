#include <stdio.h>

int main(void) {
	char color[5][10] = { "red","green","blue","brown","cyan" };
	int i;
	int k;
	//단어 단위로 출력
	for (i = 0; i < 5; i++) {
		printf("%s\n", color[i]);
	}
	//문자단위
	for (i = 0; i < 5; i++) {
		for (k = 0; k < 10; k++) {
			printf("%c  ", color[i][k]);
		}
	}
	return 0;
}