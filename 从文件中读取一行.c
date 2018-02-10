#include <stdio.h>
#include <stdlib.h>

// 题目要求
// 从文件中读取一行

int main()
{
	char c[100];
	FILE *fptr;

	if((fptr = fopen("a.txt","r")) == NULL)
	{
		printf("错误，没有打开文件");
		// 文件指针 返回 null 则退出
		exit(1);
	}

	// 读取文本,直到碰到新的一行开始
	fscanf(fptr,"%[^\n]",c);

	printf("读取内容:\n%s",c);

    return 0;
}