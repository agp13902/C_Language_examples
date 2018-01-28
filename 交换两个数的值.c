#include <stdio.h>

int main()
{
    int n1=20;
	int n2=30;
	int sun;

	printf("交换前两个数的值分别是：n1=%d,n2=%d\n",n1,n2);

	// 交换过程
	sun=n1;
	n1=n2;
	n2=sun;

	printf("交换后两个数的值分别是：n1=%d,n2=%d",n1,n2);

    return 0;
}