#include <stdio.h>
//常量
#define  PROGRAM_LANGUAGE "C语言"

float testF(float a,float b)
{
	printf("两个浮点数相加的结果是%f\n",a+b);
}


float testX(float a,float b)
{
	printf("两个浮点数相减的结果是%f\n",a-b);
}

int main(void)
{
	extern int x;
	extern int y;
	extern float z;
	extern float m;
	testF(z,m);
	testX(z,m);
	printf("今年是%d%d年\n",x*y,x*y+2);
	printf("hello %s world\n",PROGRAM_LANGUAGE);
	echoTest();
	return 0;
}
