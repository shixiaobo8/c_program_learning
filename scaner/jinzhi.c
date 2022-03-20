#include <stdio.h>
// 进制数的转换

// 2 进制
//int x = 01010101100
//int y = 10111011100

// 8 进制
int a = 0123;
int b = 0400;

// 16 进制
int c = 0x15;
int d = 0x230;
int f = 0x230L;

int main(void)
{
	printf("a=%o十进制数是%d\n",a,a);
	printf("b=%o十进制数是%d\n",b,b);
	printf("c=%x十进制数是%d\n",c,c);
	printf("d=%x十进制数(短整型)是%d,占用内存字节数%d\n",d,d,sizeof(d));
	printf("f=%x十进制(长整型)数是%d,占用内存字节数是%d\n",f,f,sizeof(d));
}
