#include <stdio.h>

// 题目要求
// 斐波那契数列指的是这样一个数列 
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233，377........
// 这个数列从第3项开始，每一项都等于前两项之和。
// 输出指定数量的斐波那契数列

int main()
{
	int i,n,t1=0,t2=1,next;

	printf("输出几项");
	scanf("%d",&n);

	printf("斐波那契数列\n");
	for(i = 1;i <=n;i++)
	{
		printf("%d,",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
	}

	return 0;
}