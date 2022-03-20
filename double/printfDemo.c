#include <stdio.h>
// printf 函数演示
void main(void)
{
	int num1 = 123;
	int num2 = 998877;
	printf("num1=%d,num1=%5d,num1=%-5d,num1=%2d\n",num1,num1,num1,num1);
	printf("num2=%d,num2=%8ld,num2=%13ld,num2=%5d\n",num2,num2,num2,num2,num2);
	double num3 = -456.0024324;
	float num4 = 789.0251;
	printf("num3=%2f,num3=%13f,num3=%-3lf,num3=%5f\n",num3,num3,num3,num3,num3);
	printf("num3=%2e,num3=%13e,num3=%-3le,num3=%5e\n",num3,num3,num3,num3,num3);
	printf("num4=%3f,num4=%14f,num4=%-14f,num4=%9lf\n",num4,num4,num4,num4,num4);
}
