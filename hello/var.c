#include <stdio.h>
int x = 5;
int y = 4;
float z = 3.14;
float m = 6.7;
char a = 98;
char b = 65;

int echoTest(void)
{
	printf("变量z占用的字节数是%d,值为%2f\n",sizeof(z),z);
	printf("变量m占用的字节数是%d,值为%3f\n",sizeof(m),m);
	printf("变量a占用的字节数是%d,值为%c\n",sizeof(a),a);
	printf("变量b占用的字节数是%d,值为%c\n",sizeof(b),b);
	return 0;
}
