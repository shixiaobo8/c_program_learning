#include "stdio.h"
// factorial 计算 !1+!2+!3+!4+!5+...+!n
int getFactorial(num)
{
	int i;
	int count=1;
	for(i=1;i<=num;i++){
		printf("%d\n",i);
		count = count*i;
		printf("count=%d\n",count);
	}
	return count;
}

int main(void)
{
	int i;
	int num;
	int allcount=0;
	int count;
	printf("请输入要求的阶乘的和数:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		count = getFactorial(i);
		allcount += count;
	}
	printf("阶乘和为:%d\n",allcount);
	return 0;
}
