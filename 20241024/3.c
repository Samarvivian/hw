//银行拟根据以下原则决定是否给某人贷款，请设计程序，提示用户输入相应信息，并决定是否贷款给他

#include<stdio.h>
int main()
{
    char choice=0;
    int wage=0;
    printf("是否拥有房产？A.是 B.否\n");
    scanf("%c",&choice);
    if(choice=='A')
    {
        printf("可以偿还，可以贷款\n");
    }
    else
    {
        getchar();
        printf("是否结婚?A.是 B.否\n");
        scanf("%c",&choice);
        if(choice=='A')
        {
            printf("可以偿还，可以贷款\n");
        }
        else
        {
            getchar();
            printf("请输入月工资:");
            scanf("%d",&wage);
            if(wage>=4000)
            {
                printf("可以偿还，可以贷款\n");
            }
            else
            {
                printf("不能偿还，无法贷款\n");
            }
        }
    }
    return 0;
}