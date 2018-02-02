#include <stdio.h>

// 题目要求
// 质数（prime number）又称素数，有无限个。
// 质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数，这样的数称为质数。

int main()
{
    int n,i,flag=0;

	printf("请输入一个整数：");

	scanf("%d",&n);

	for(i=2;i <= n/2;++i)
	{
		// 符合该条件的不是素数
		if(n%i == 0)
		{
			flag=1;
			break;
		}
	}
	if (flag == 0 )
	{
		printf("%d 不是素数",n);
	}
	else
	{
		printf("%d 不是素数",n);
	}

    return 0;
}