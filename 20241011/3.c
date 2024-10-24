//编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符
#include<stdio.h>
int main()
{
    int a=0;
    printf("请输入一个ASCII码值：");
    scanf("%d",&a);
    if(a<0||a>127)
    {
        printf("输入错误\n");
        exit(-1);
    }
    printf("对应的字符是：%c",a);
    return 0;
}