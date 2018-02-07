#include <stdio.h>

// 题目要求
// a、b、c 三个变量，通过引用按顺序循环替换他们的值

void cyclicSwap(int *a,int *b,int *c);

int main()
{
	int a,b,c;
	printf("输入a,b和c的值：");
	scanf("% %d %d",%a,%b,&c);

	printf("交换前：\n");
	printf("a=%d\n b=%d\n c=%d\n",a,b,c);

	cyclicSwap(a,b,c);

	printf("交换后：\n");
	printf("a=%d b=%d c=%d",a,b,c);

    return 0;
}

// 通过引用按顺序循环替换他们的值
void cyclicSwap(int *a,int *b,int,int *c)
{
	int tmp;

	// 交换
	tmp=*b;
	*b=*c;
	*c=*a;
	*a=tmp;
}