#include <stdio.h>
// 从键盘输入一个整数,判断这个数字的奇偶性

int main(void)
{
	int num;
	printf("请输入一个整数:");
	scanf("%d",&num);
	if(num%2!=0){
		printf("数字%d是奇数\n",num);
	}else{
		printf("数字%d是偶数\n",num);
	}
}
