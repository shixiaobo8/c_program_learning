#include <stdio.h>
// 从键盘输入两个整数,计算其乘积

int main(void)
{
	int x,y,z;
	printf("请输入两个整数:\n");
	// 从键盘接收两个整数
	scanf("%d%d",&x,&y);
	printf("接收到的x=%d,y=%d\n",x,y);
	z=x*y;
	printf("两者的乘积是:%d\n",z);
	return z;
}
