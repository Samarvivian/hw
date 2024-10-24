#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	int temp = a;
	a =b;
	b = temp;
	printf("交换后，a=%d,b=%d\n", a, b);
	return 0;
}