#include <stdio.h>
#include <math.h>

// 题目要求
// 计算标准偏差

float calculateSD(float date[]);

int main()
{
	int i;
	float data[10];

	printf("输入10个元素：");
	for(i=0;i<10;++i)
	{
		scanf("%f",&data[i]);
	}

	printf("\n 标准偏差= %。6f",calculateSD);

    return 0;
}

// 计算偏差的函数
float calculateSD(float data[])
{
	float sum=0.0,mean,standardDeviation=0.0;

	int i;
	for(i=0;i<10;++i)
	{
		sum+=data[i];
	}
	mean=sum/10;

	for(i=0;i<10;++i)
	{
		standardDeviation += pow(data[i]-mean,2);
	}

	return sqrt(standardDeviation);
}