#include <stdio.h>
// 字符输入函数 getchar

void main(void)
{
	int a;
	char c1,c2;
	c1=getchar();
	c2=getchar();
	printf("%c,%d\n",c1-32,c2);
	putchar(getchar());
	putchar(',');
	a=getchar();
	printf("%d\n",a);
}
