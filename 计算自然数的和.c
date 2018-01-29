#include <stdio.h>

// 题目要求
// 自然数是指表示物体个数的数，
// 即由0开始，0，1，2，3，4，……一个接一个，组成一个无穷的集体，即指非负整数。
// 使用for循环

int main()
{
	int number,n;

	printf("请输入一个数字:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		number+=i;
	}
	printf("%d",number);

    return 0;
}