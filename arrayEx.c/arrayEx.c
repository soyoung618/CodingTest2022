//650�� 800�� �̸� ���� = �������, �ο���
#include <stdio.h>
//#include <string.h>
int solution(int score[], int arr_length) {
	int cnt = 0;  //�ο���
	for (int i = 0; i < arr_length; i++) {
		if (score[i] >= 650 && score[i] < 800) {
			cnt++;
		}
	}
	return cnt;
}

int main(void) {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int result;
	result = solution(score, 10); //solution �Լ�

	printf("������� : %d", result);

	return 0;
}
