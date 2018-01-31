#include <stdio.h>

// 题目要求
// 判断一个数是否为回文数
// 设n是一任意自然数。
//若将n的各位数字反向排列所得自然数n1与n相等，则称n为一回文数。
//例如，若n=1234321，则称n为一回文数；但若n=1234567，则n不是回文数

int main()
{
	int n,reversed = 0,remainde,origion;

	printf("输入一个整数：");
	scanf("%d",&n);

	origion=n;
	while(n != 0)
	{
		remainde=n%10;
		reversed += remainde;
		n /= 10;
	}

	// 判断
	if(origion == reversed)
	{
		printf("%d 是回文数",origion);
	}
	else
	{
		printf("%d 不是回文数",origion);
	}

    return 0;
}