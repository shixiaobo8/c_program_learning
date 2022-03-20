#include <stdio.h>
// 计算圆的周长和面积
#define PI 3.141592653

// 周长计算 radius 半径
double countLength(double radius)
{
	double length;
	length = PI * radius * 2;
	return length;
}

// 面积计算
double countSize(double radius)
{
	double size;
	size = PI * radius * radius;
	return size;
}

// 主函数
void main(void)
{
	int radius;
	double length;
	double size;
	printf("请输入圆的半径:");
	scanf("%d",&radius);
	//printf("半径r=%d\n",radius);
	length = countLength(radius);
	size = countSize(radius);
	printf("半径为%d的圆的周长是%f,面积是%f\n",radius,length,size);
}
