#include <stdio.h>

// 题目要求
// 输出九九乘法口诀表

int main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%dx%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}