#include <stdio.h>

// 题目要求
// 用户输入数字，判断该数字是几位数

int main()
{
	long long n;
	int count=0;

	printf("输入一个整数：");
	scanf("%lld",&n);

	while(n != 0)
	{
		// n=n/10
		n /= 10;
		++count;
	}

	printf("数字是%d未数",count);

    return 0;
}