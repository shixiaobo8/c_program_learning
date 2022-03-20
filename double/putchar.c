#include <stdio.h>
// 输出字符 行数 putchar
main(void)
{
	char a1,b2,c3;
	a1='B';
	b2='o';
	c3='b';
	putchar(a1);
	putchar('\n');
	putchar(b2);
	putchar('\n');
	putchar(c3);
	putchar('\n');
	int a;
	for(a=1;a<=128;a++)
	{
		putchar(a);
		putchar(' ');
		putchar(' ');
		putchar('=');
		putchar('>');
		putchar(' ');
		putchar(' ');
		printf("%d",a);
		putchar('\n');
	}
	return 0;
}
