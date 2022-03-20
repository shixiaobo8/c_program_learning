#include <stdio.h>
// 逗号表达式的用法
int main()
{
	int a,b;
	printf("%d",(a=2,b=5,a++,b++,a+b));
}
