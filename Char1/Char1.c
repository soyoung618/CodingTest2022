#include <stdio.h>
int main(void) {
	/*char zero = '0';
	int n = zero - 48;
	printf("%d\n", zero);
	printf("%d\n", n);*/

	char s1[] = "COS PRO";
	char s2[10] = { 'k','o','r','e','a'};

	//s1 = "mirim high"; //���ڿ��迭�̸��� ���Կ��� �Ұ�

	printf("%s %d\n", s1, sizeof(s1));
	printf("%s %d\n", s2, sizeof(s2));

	//Char�� ������ ����� �ʱ�ȭ�� ���ÿ� �ؾ��Ѵ�
	//���ڿ� �迭�� �������� �׻�'0'�� ����־ ���ڼ��� 7���� �ϴ���� size�� 8�̴�
	return 0;
}