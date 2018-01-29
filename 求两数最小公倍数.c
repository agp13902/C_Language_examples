#include <stdio.h>

// 题目要求
// 用户输入两个数，其这两个数的最小公倍数。

int main()
{
	int n1,n2,minul;
	printf("请输入两个正整数\n");
	scanf("%d %d\n",&n1,&n2);

	minul=(n1>n2)?n1:n2;

	while(1)
	{
		if(minul%n1==0 && minul%n2==0)
		{
			printf("%d和%d的最小公倍数是%d\n",n1,n2,minul);
		}
		++minul;
	}

    return 0;
}