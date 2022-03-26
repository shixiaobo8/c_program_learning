#include "stdio.h"
// 从键盘输入一个数计算这个数的阶乘

int factorial(int num)
{
	int count=1;
	int i;
	for(i=1;i<=num;i++)
	{
		count = i*count;
	}
	return count;
}

int main(void)
{
	int num,count;
	printf("请输入要计算哪个数字的阶乘:");
	scanf("%d",&num);
	count = factorial(num);
	printf("num的阶乘是:%d\n",count);
	return 0;
}
