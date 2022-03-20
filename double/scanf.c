#include <stdio.h>
// scanf 函数学习

void main(void)
{
	int a,b;
	char c;
	int d;
	printf("请输入数字a,数字b:");
	scanf("%d,%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	printf("请输入一个字符:");
	getchar();
	scanf("%c",&c);
	printf("c=%c\n",c);
	printf("请输入一个数字:");
	scanf("%d",&d);
	printf("d=%d\n",d);
}
