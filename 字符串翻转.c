#include <stdio.h>

// 字符串翻转的函数
void stringFlip();

int main()
{
	printf("输入一个字符串:\n");
	stringFlip();

    return 0;
}

/*
* 字符串翻转函数
*/
void stringFlip()
{
	char c;
	scanf("%c",&c);

	if(c != '\n')
	{
		stringFlip();
		printf("%c",c);
	}
}