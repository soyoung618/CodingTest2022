#include<stdio.h>
int main(void) {
	char s1[7][10] = { "�ѱ�","�̱�","�Ϻ�","����","ȣ��","����" };
	for (int i = 0; i < 6; i++) {
		if (s1[i] ==s1[i] ) {
			printf("%s", s1[i]);
		}
	}
	return 0;
}