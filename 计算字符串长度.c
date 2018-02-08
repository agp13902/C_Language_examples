#include <stdio.h>
#include <string.h>

// 题目要求
// 计算字符串长度

int main()
{
	char s[100];
	int len;

	printf("输入字符串：");
	scanf("%s",s);
	len=strlen(s);

	printf("字符串长度是：%d",len);

    return 0;
}