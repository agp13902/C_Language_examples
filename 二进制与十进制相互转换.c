#include <stdio.h>
#include <math.h>

// 题目要求
// 二进制转与十进制相互转换

// 二进制转换为十进制
int converBint(long long n);

// 十进制转换为二进制
long long converSjz(int n);

int main()
{
    // 二进制转换为十进制
    long long n;
    printf("输入一个二进制数：\n");
    scanf("%lld",&n);
    printf("二进制数%lld转换为十进制数为%d",n,converBint(n));

    // 十进制转换为二进制
    int m;
    printf("请输入一个十进制数：\n");
    scanf("%d",&m);
    printf("十进制数%d转换为二进制数是%lld",m,converSjz(n));


    return 0;
}

// 二进制数转换为十进制数
int converBint(long long n)
{
    int decimalun = 0,i=0,remainder;
    while(n != 0)
    {
        remainder = n%10;
        n /= 10;
        decimalun += remainder*pow(2,i);
        ++i;
    }
    return decimalun;
}

// 十进制转换为二进制
long long converSjz(int n)
{
    long long binc=0;
    int remainder,i=1,step=1;

    while(n != 0)
    {
        remainder=n%2;
        printf("Step %d: %d/2 ,余数=%d,商=%d\n",step++,n,remainder,n/2);
        n /= 2;
        binc+=remainder*i;
        i*=10;
    }

    return binc;
}
