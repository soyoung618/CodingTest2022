#include <stdio.h>
int main(void) {
	char s1[20] = { "codig test" };
	char s2[20];
	//���� ���ϱ�
	int cnt = 0;
	while (s1[cnt] != '\0') {
		cnt++;
	}
	//����
	for (int i = 0; i <= cnt; i ++) {
		s2[i] = s1[i];
	}
	printf("���纻 : % s", s2);
	return 0;
}