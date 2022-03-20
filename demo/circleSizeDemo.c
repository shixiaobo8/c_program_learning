#include "stdio.h"
#define PI 3.141592653   //圆周率

double countSize(double radius,double high)
{
	double size;
	size = PI * radius * radius * high;
	return size;
}

// 计算圆柱的体积
int main(void)
{
	double radius=1.5; /* 圆柱地面半径 */
	double high=2.0;  /* 圆柱体高 */
	double size;
	size = countSize(radius,high);
	printf("地面半径为:%f,高为%f的圆柱体的体积是%f:",radius,high,size);
	return 0;
}
