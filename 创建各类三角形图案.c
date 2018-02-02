#include <stdio.h>

// 题目要求
// 创建三角形图案

int main()
{
	int rows;

	printf("行数:");

	scanf("%d",&rows);

	for(int i=1;i <= rows;++i)
	{
		for(int j=1;j <= i;++j)
		{
			printf("*");
		}
		printf("\n");
	}

    return 0;
}