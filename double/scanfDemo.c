#include <stdio.h>
// 从键盘输入一个学生的学号,性别,和一门课程的成绩后输出该学生的信息

int main(void)
{
	int studentId;
	char sex;
	float score;
	printf("请输入学生的学号:\n");
	scanf("%d",&studentId);
	printf("请输入学生的性别[字母缩写F(Female女性),M(Male男性)]:\n");
	// 这一句很重要否则下面获取不到
	getchar();
	scanf("%c",&sex);
	printf("请输入该学生的数学成绩:\n");
	scanf("%f",&score);

	printf("学生信息如下\n:");
	printf("  学号:%d\n",studentId);
	printf("  性别:%c\n",sex);
	printf("  数学成绩:%f\n",score);
}
