#include <stdio.h>
// 从键盘输入小写字母转换成大写字母并且输出

int main(void)
{
	char lowcaseChar; /* 小写字母 */
	char captailChar;  /* 大写字母 */
	printf("请输入一个小写字母,输入后将为你自动转换成大写字母:");
	//lowcaseChar = getchar();
	//putchar(lowcaseChar);
	//captailChar = lowcaseChar-32;
	scanf("%c",&lowcaseChar);
	//captailChar = putchar(lowcaseChar-32);
	//printf("\n字母%c对应的大写字母为:%c\n",lowcaseChar,captailChar);
	printf("字母%c对应的大写字母为:%c\n",lowcaseChar,lowcaseChar-32);
	return 0;
}
