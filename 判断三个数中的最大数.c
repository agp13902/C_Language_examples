#include <stdio.h>

// 题目要求
// 比较三个数中的最大的那个数

int main()
{
	double number1,number2,number3;

	printf("请输入三个数字，以空格分隔\n");

	scanf("%d %d %d\n",&number1,&number2,&number3);

	if(number1 >= number2 && number1 >= number3)
	{
		printf("%d 是最大的数字\n",number1);
	}
	
	if(number2 >= number1 && number2 >= number3)
	{
		printf("%d 是最大的数字\n",number2);
	}
	
	if(number3 >= number2 && number3 >= number1)
	{
		printf("%d 是最大的数字\n",number3);
	}


    return 0;
}