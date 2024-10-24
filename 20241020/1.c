#include<stdio.h>
int main()
{
    printf("%d\n",!(4<=6)&&(3<=7));
    int x=!(2<5==5);
    printf("%d\n",x);
    x=0;
    int y=0,z=0;
    printf("%d\n",++x&&++y||++z);
    int a=15;
    printf("%d\n",a<<1);
    a=10;
    printf("%d\n",a+=a-=a*a);
    return 0;
}