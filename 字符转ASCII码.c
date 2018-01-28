#include <stdio.h>

// 题目要求
// C 语言实例 - 字符转 ASCII 码

int main()
{
	char c;

	printf("请输入一个字符\n");

	scanf("%c",&c);

	printf("你输入的字符是%c 他的ASCII码是%c",c,c);

	return 0;
}