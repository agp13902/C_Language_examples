#include <stdio.h>

// 题目要求
// 使用结构体（struct）存储学生信息

// 结构体
struct student
{
	char name[50];
	int roll;
	float marks;
} s;

int main()
{
	printf("输入信息：\n");
	
	printf("名字:\n");
	scanf("%s",&s.name);

	printf("编号:\n");
	scanf("%s",&s.roll);

	printf("成绩:\n");
	scanf("%s",&s.marks);

	printf("显示信息\n");

	printf("名字");
	puts(s.name);

	printf("编号：%s\n",s.roll);
	printf("成绩：%s\n",s.marks);

    return 0;
}