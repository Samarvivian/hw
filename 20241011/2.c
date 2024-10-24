//设圆的半径r=1.5，圆柱高h=3，
//求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积，用scanf输入数据，输出计算结果。
#include<stdio.h>
#define num 3.14
int main()
{
    float r=0,h=0;
    scanf("%f %f",&r,&h);
    float c=2*r*num;
    float s1=r*r*num;
    float s2=r*r*num*4;
    float v1=4/3*num*r*r*r;
    float v2=r*r*num*h;

    printf("圆周长：%f\n",c);
    printf("圆面积：%f\n",s1);
    printf("圆球表面积：%f\n",s2);
    printf("圆球体积：%f\n",v1);
    printf("圆柱体积：%f\n",v2);

    return 0;
}