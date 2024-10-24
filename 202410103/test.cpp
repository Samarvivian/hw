#include<stdio.h>
int main()
{
	char a = 06;
	printf("%c\n", a);//得到的只是ASCII值
	a += 100;
	printf("%d\n", a);
	a = a * 45;
	printf("%c\n", a);
	return 0;

}