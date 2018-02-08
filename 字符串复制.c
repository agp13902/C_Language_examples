#include <stdio.h>
#include<string.h>

// 题目要求
// 将一个变量的字符串复制到另外一个变量中
// 使用 strcpy()

int main()
{
    char src[40];
    char dest[100];

    memset(dast,'\0',sizeof(dest));
    strcpy(src,"This is runoob");
    strcpy(dast,src);

    printf("最终的目标字符串:%s\n",dest);

    return 0;
}