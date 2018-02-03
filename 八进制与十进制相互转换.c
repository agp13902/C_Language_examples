#include <stdio.h>
#include <math.h>

// 题目要求
// 八进制与十进制相互转换

int main()
{
    int number1;
    printf("请输入一个十进制的数：\n");
    scanf("%d",&number1);

    // %x 是输出八进制数
    printf("你输入的十进制数是%d,转换为八进制数是%x",number1,number1);

    int number2;
    printf("请输入一个八进制数：\n");
    scanf("%x",&number2);

    // %d 是输出十进制数
    printf("你输入的八进制数是%x,转换为十进制数是%d",number2,number2);

    return 0;
}