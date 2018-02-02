#include <stdio.h>

// 题目要求
// 实现简单的计算器
// 实现加减乘除计算

int main()
{
     char oper;
     double number1,number2;

     printf("输入操作符（+，-，/，*）：");
     scanf("%c",&oper);

    printf("输入两个数字：");
    scanf("%lf %lf",&number1,&number2);

    switch(oper)
    {
        case '+':
            printf("%0.1lf+%0.1lf=%0.1lf",number1,number2,number1+number2);
            break;
        case '-':
            printf("%0.1lf-%0.1lf=%0.1lf",number1,number2,number1+number2);
            break;
        case '*':
            printf("%0.1lf*%0.1lf=%0.1lf",number1,number2,number1*number2);
            break;
        case '/':
            printf("%0.1lf\\%0.1lf=%0.lf",number1,number2,number1/number2);
            break;
    }

    return 0;
}