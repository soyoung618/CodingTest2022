#include <stdio.h>
#include <string.h>
int main(void) {
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];

	printf("s1 문자열의 길이 : %d\n", strlen(s1));
	strcpy(s2, s1);  //s1을s2에 capy
	printf("%s\n", s2);
	strcat(s2, s1);
	printf("%s\n", s2);  //s1을 s2에 붙힌다
	printf("%d\n", strcmp("mirim", "high")); 
	printf("%d", strcmp("mirim", "mrirm"));
/*
	if (strcmp(student[i], "XS")) == 0{
		count[i]++;
	}*/
	return 0;
}