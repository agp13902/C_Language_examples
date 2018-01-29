#include <stdio.h>

// 题目要求
// 用户输入一个数字，判断该数字是正数还是负数或是零。

int main()
{
    double number;

	printf("请输入一个数字:\n");
	scanf("%lf",&number);

	if(number  <= 0.0)
	{
		if(number == 0.0)
		{
			printf("你输入的是0");
		}
		else
		{
			printf("你输入的是负数");
		}
	}
	else
	{
		printf("你输入的是正数");
	}

    return 0;
}