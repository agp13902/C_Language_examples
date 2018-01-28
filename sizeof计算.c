#include <stdio.h>

// 题目要求
// 使用 sizeof 操作符计算int, float, double 和 char四种变量字节大小。
// sizeof 是 C 语言的一种单目操作符，如C语言的其他操作符++、--等，它并不是函数。
// sizeof 操作符以字节形式给出了其操作数的存储大小。

int main()
{
    int a;
	float b;
	double c;
	char d;
	long e;
	long long f;
	long double g;

	printf("int sizeof = %d",sizeof(a));
	printf("float sizeof = %d",sizeof(b));
	printf("double sizeof = %d",sizeof(c));
	printf("char sizeof = %d",sizeof(d));
	printf("long sizeof = %d",sizeof(e));
	printf("long long sizeof = %d",sizeof(f));
	printf("long double sizeof = %d",sizeof(g));

    return 0;
}