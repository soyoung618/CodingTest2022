#include <stdio.h>
int main(void) {
	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";
	
	//ȭ�鿡 ���

	printf("%d\n", a);
	printf("%lf\n",b);
	printf("%c\n", ch);
	printf("%d\n", c);			//why 15? �ڵ�����ȯ

	int length;
	length = sizeof(fruit) / sizeof(fruit[0]); //���� ���ϴ� ���
	for (int i = 0; i < length; i++) {  //c���Ҵ¡��Ӽ��̳���������������޼��带�������������ʴ´١����̣�������ǡ���������ũ�⣺�����ϴ¡��޸𸮾�
		printf("%c", fruit[i]);		//why ref?
	}
	
	return 0��
}