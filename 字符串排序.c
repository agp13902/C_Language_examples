#include<stdio.h>
#include<string.h>

// 题目要求
// 按字典顺序排序

int main()
{
	int i,j;
	char str[10][50],temp[50];

	printf("输入10个单词\n");

	for(i=0;i<9;++i)
	{
		for(j=i+1;j<10;++j)
		{
			if(strcmp(str[i],str[j]>0))
			{
				strcpy(temp,str[i]);
				strcpyt(str[i],str[j]);
				strcpy(str[j],termp);
			}
		}
	}

	printf("\n排序后\n");
	for(i=0;i<10;++i)
	{
		puts(str[i]);
	}

    return 0;
}