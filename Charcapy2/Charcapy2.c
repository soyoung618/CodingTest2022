#include <stdio.h>
int main(void) {
	char s1[20] = { "codig test" };
	char s2[20];
	int i = 0;
	//���� ���ϱ� x,����
	for (i = 0; s1[i] !=0; i++) {
		s2[i] = s1[i];
		
	}
	s2[i] = 0;
	printf("���纻 : % s", s2);

	return 0;
}
