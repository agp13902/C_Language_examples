#include <stdio.h>

// 题目要求
// 查找字符在字符串中的起始位置(索引值从 0 开始)

int main()
{
	char str[1000],ch;
	int i,frequency=0;

	printf("输入字符串：");
	fgets(str,(sizeof str / sizeof str[0]),stdin);

	printf("输入要查找的字符：");
	scanf("%c",&ch);

	for(i=0;str[i] != '\0';++i)
	{
		if(ch == str[i])
		{
			++frequency;
		}
	}

	printf("字符%c在字符串中出现的次数为%d",ch,frequency);

    return 0;
}