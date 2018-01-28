#include <stdio.h>

// 题目要求
// 使用 scanf() 来接收输入， printf() 与 %d 格式化输出整数。

int main()
{
    int number1,number2,max;

    printf("请输入两个整数，使用空格隔开：\n");

    scanf("%d %d",&number1,number2);

	max=number1+number2;

	printf("你输入的两个数字相加等于：%d",max);

    return 0;
}