//1.在美国的体积测量系统中，
//1品脱等于2杯1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
//编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
//思考对于该程序，为何使用浮点类型比整数类型更合适?
#include<stdio.h>
int main()
{
    float cup=0;//杯数
    printf("请输入杯数：");
    scanf("%f",&cup);

    float pint=cup/2;
    float ounce=8*cup;
    float soulspoon=ounce*2;
    float teaspoon=soulspoon*3;

    printf("对应的pint是%f\n",pint);
    printf("对应的ounce是%f\n",ounce);
    printf("对应的soulspoon是%f\n",soulspoon);
    printf("对应的teaspoon是%f\n",teaspoon);

    return 0;
}