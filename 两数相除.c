#include <stdio.h>

// 题目要求
// C 语言实例 - 两数相除
// 两数相除，如果有余数，输出余数。

int main()
{
	int number1,number2,sum,max;

	printf("输入被除数\n");
	scanf("%d",&number1);

	printf("输入除数\n");
	scanf("%d",&number2);

	// 计算商
	sum=number1 / number2;

	// 计算余数
	max=number1 % number2;

	// 输出结果
	printf("你输入的两个数，相除的商等于%d\n",sum);
	printf("你输入的两个数，相除的余数等于%d\n",max);

	return 0;
}