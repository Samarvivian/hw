//假设所有变量的类型都是int，下列各项变量的值是多少，编程验证:
//x=(int)3.8+ 3.3:x=(2+3)*10.5x=3/5*22.0;x=22.0*3/5;

#include<stdio.h>
int main()
{
    int x=(int)3.8+ 3.3;
    printf("%d\n",x);

    x=(2+3)*10.5;
    printf("%d\n",x);

    x=3/5*22.0;
    printf("%d\n",x);

    x=22.0*3/5;
    printf("%d\n",x);

    return 0;
}