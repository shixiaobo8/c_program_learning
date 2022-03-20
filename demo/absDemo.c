#include "stdio.h"
// 从键盘输入一个数,求其绝对值并输出

int getAbsValue(int num)
{
	int absValue;
	if(num>0){
		absValue = num;
	}else if(num<0){
		absValue = -num;
	}else{
		absValue = 0;
	}
	printf("您输入的数字%d的绝对值是:%d\n",num,absValue);
}

int main(void)
{
	int num;
	printf("请输入一个数字用来求其绝对值:");
	scanf("%d",&num);
	getAbsValue(num);
	return 0;
}
