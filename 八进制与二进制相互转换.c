#include <stdio.h>
#include <math.h>

// 题目要求
// 八进制与二进制相互转换

// 二进制转换为八进制
int convertBinarytoOctal(long long binaryNumber);

// 八进制转换为二进制
long long convertOctalToBinary(int octalNumber);

int main()
{
	// 二进制转换为八进制
	long long binaryNumber;

	printf("输入一个二进制数：\n");
	scanf("%lld",&binaryNumber);

	printf("二进制数%lld 转换为八进制数为%d",binaryNumber,convertBinarytoOctal(binaryNumber));


	// 八进制转换为二进制
	int octalNumber2;

	printf("请输入一个八进制数");
	scanf("%d",octalNumber2);

	printf("八进制数 %d 转换为 二进制数为 %lld ",octalNumber2,convertOctalToBinary(octalNumber2));

    return 0;
}

/*
* 二进制转换为八进制
*/
int convertBinarytoOctal(long long binaryNumber)
{
	int octalNumber = 0,decimalNumber = 0,i = 0;

	while(binaryNumber != 0)
	{
		decimalNumber += (binaryNumber % 10) * pow(2,i);
		++i;
		binaryNumber /= 10;
	}
	i=1;
	while(decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	return octalNumber;
}

/*
* 八进制转换为二进制
*/
long long convertOctalToBinary(int octalNumber2)
{
	int decimalNumber = 0,i = 0;
	long long binaryNumber=0;

	while(octalNumber2 != 0)
	{
		decimalNumber += (octalNumber2 % 10)*pow(8,i);
		++i;
		octalNumber2 /= 10;
	}
	i=1;
	while(decimalNumber != 0)
	{
		binaryNumber += (decimalNumber % 2) * i;
		decimalNumber /= 2;
		i *= 10;
	}
	return binaryNumber;
}