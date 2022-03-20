#include <stdio.h>
// 字符串常量表示方法

#define STR "疫情隔离111\\\\t"

int main(void)
{
	printf("STR=%s\n",STR);
	printf("常量STR占用的字节数为%d\n",sizeof(STR));
}
