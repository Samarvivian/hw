#include<stdio.h>

int main(void) {
	char a;

	printf("请输入一个ASCII码值：\n");
	scanf_s("%d", &a);

	printf("字符是:%c\n", a);

	getchar();
	getchar();

	return 0;
}