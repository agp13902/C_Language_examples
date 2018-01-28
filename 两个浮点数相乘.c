#include <stdio.h>

// 题目要求
// C 语言实例 - 两个浮点数相乘

int main()
{
	double number1,number2,max;

	printf("请输入两个浮点数，使用空格相隔\n");

	scanf("%lf %lf\n",&number1,&number2);

	// 计算两个浮点数相乘的结果
	max=number1*number2;

	printf("你输入的两个浮点数相乘的结果是%lf",max);

    return 0;
}