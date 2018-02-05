#include <stdio.h>

int main()
{
	int n,i;
	float num[100],sum=0.0,average;

	printf("输入元素个数：\n");
	scanf("%d",&n);

	while(n > 100 || n <= 0)
	{
		printf("错误！数字需要在1到100之间");
		printf("再次输入");
		scanf("%d",&n);
	}

	for(i=0;i<n;++i)
	{
		printf("%d 输入数字：",i+1);
		scanf("%f",&num);
		sum += num[i];
	}

	average = sum / n;
	printf("平均值是 = %.2f",average);

    return 0;
}