#include <stdio.h>

// 题目要求
// Armstrong数，就是n位数的各位数的n次方之和等于该数

int main()
{
	int number,origian,remainber,result=0;

	printf("输入三位数 \n");

	scanf("%d",&number);

	origian=number;

	while(origian != 0)
	{
		remainber=origian%10;
		remainber += remainber * remainber * remainber;
		origian /= 10;
	}

	if(result == number )
	{
		printf("%d 是Armstrong数",number);
	}
	else
	{
		printf("%d 不是Armstrong数",number);
	}

    return 0;
}