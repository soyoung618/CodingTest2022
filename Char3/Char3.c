#include <stdio.h>
int main(void) {
	char s1[30] = { "coding test exercise" };
	int cnt = 0;
	//s1�� ���� =>while
	//�� ǥ�� ==, =='\0'
	while (s1[cnt] != '\0') {
		cnt++;
	}
	printf(",���ڿ��� ���� : %d",cnt );
	printf("\n");
	cnt = 0;
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break;
		cnt++;
	}
	printf("���ڿ��� ����:%d", cnt);
	return 0;
}