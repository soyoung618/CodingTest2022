#include <stdio.h>

int main(void) {
	int score = 73;
	char result;
	if (score >= 90) {
		result = 'A';
	}
	else if (score>= 80) {
		result = 'B';
	}
	else if (score >= 70) {
		result = 'C';
	}
	else {
		result = 'D';
	}

	printf("%c",result);

	int c = 200;
	if (0 < c || c < 100) {
		printf("0���� 100����\n");
	}
	if (0 <= c && c < 100) {
		printf("0���� 100����\n");
	}
	
	int d = 5;
	if (d) {
		printf("����� ���� ���� �����ؼ� �����մϴ�.");
	}
	int e = 10;
	if (e == 10) {
		printf("hi");
		printf("hello");
	}
	int total = 0;
	for(int i=0; i<10;i++){
		total +=i ;
		if (total == 10) break;
	}
	printf("%d", total);

	return 0;
}

