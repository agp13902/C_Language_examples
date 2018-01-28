#include <stdio.h>

// 题目要求
// 判断输入的字母是元音，还是辅音。
//英语有26个字母，元音只包括 a、e、i、o、u 这五个字母，
//其余的都为辅音。y是半元音、半辅音字母，但在英语中都把他当作辅音。

int main()
{
    char c;

	printf("请输入一个字母\n");

	scanf("%c",&c);

	// 小写元音
	int iflow = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// 大写元音
	int ifll = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// 判断
	if (iflow || ifll)
	{
		printf("是元音");
	}
	else
	{
		printf("是辅音");
	}

    return 0;
}