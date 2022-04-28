#include <stdio.h>
int main(void) {
	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";
	
	//화면에 출력

	printf("%d\n", a);
	printf("%lf\n",b);
	printf("%c\n", ch);
	printf("%d\n", c);			//why 15? 자동형변환

	int length;
	length = sizeof(fruit) / sizeof(fruit[0]); //길이 구하는 방법
	for (int i = 0; i < length; i++) {  //c언어에소는　속성이나　ｌｅｎｇｈｔ（）메서드를　지원하지　않는다　길이：　요소의　갯수，　크기：차지하는　메모리양
		printf("%c", fruit[i]);		//why ref?
	}
	
	return 0；
}