#include<stdio.h>
int main(void)
{
	int arr[4] = {0};
	printf("循环输入四位数字:\n");
	char num=0;
	int i=0;
	while(i<4)
	{
		printf("请输入第%d位密码：",i+1);
		num=getchar();//从键盘读取一个字符
		if(num<'0'||num>'9')
		{
			 
			
			
			while((num = getchar()) != '\n' && num != EOF)
            {
                ;
            }//清理掉所有的错误字符
			//getchar();
			printf("输入的不是数字，请重新输入\n");
			continue;
		}
		
		else
		{
			arr[i]=num-'0';//将字符转成数字
			
			i++;
			getchar();//清理掉换行符
		}
	}
	printf("加密后：\n");
	for (i = 0;i < 4;i++)
	{
		arr[i] = (arr[i] + 5) % 10;
		printf("%d", arr[i]);
	}
	return 0;	
}
