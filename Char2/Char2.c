#include <stdio.h>

int main(void) {
	char color[5][10] = { "red","green","blue","brown","cyan" };
	int i;
	int k;
	//�ܾ� ������ ���
	for (i = 0; i < 5; i++) {
		printf("%s\n", color[i]);
	}
	//���ڴ���
	for (i = 0; i < 5; i++) {
		for (k = 0; k < 10; k++) {
			printf("%c  ", color[i][k]);
		}
	}
	return 0;
}