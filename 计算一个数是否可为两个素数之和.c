#include <stdio.h>

// 题目要求
// 计算一个数为两个素数之和

int cherchPrima(int n);

int main()
{
    int n,i,flag=0;
    printf("输入正整数：");

    for(i=2;i <= n/2;++i)
    {
        // 检测判断
        if(cherchPrima(n-i) == 1)
        {
            printf("%d=%d + %d\n",n,i,n-i);
            flag=1;
        }
    }
    if(flag == 0)
    {
        printf("%d 不能放分解为两个素数",n);
    }
    
    return 0;
}

// 判断素数
int cherchPrima(int n)
{
    int i,isprime=1;

    for(i=2;i <= n/2;++i)
    {
        if(n % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    return isprime;
}