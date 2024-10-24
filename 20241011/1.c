//计算short24与short-35之和，观察是否有溢出的情况
#include<stdio.h>
int main()
{
    short a=24;
    short b=-35;
    short sum=0;
    sum=a+b;
    printf("%hd",sum);
    return 0;
}