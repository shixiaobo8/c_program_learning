#include "stdio.h"
// 从键盘输入数组元素的值赋值
int main(void)
{
	int a[5];
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("请输入数组的第%d个值",i);
		scanf("%d",&a[i]);
	}
	printf("\n赋值后数组的元素值为:\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf(" %d ",a[i]);
	}
	return 0;
}
