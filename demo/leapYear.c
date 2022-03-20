#include "stdio.h"
// 从键盘输入一个年份year(4位十进制整数),判断其是否是闰年(闰年的条件是能被4整除,但不能被100整除,或者能被400整除)
int isLeapYear(int year)
{
	int leapYear; // 模拟bool 0 为false 1 为true
	if(year%400 == 0 || (year%4==0 && year%100!=0)){
		printf("%d是闰年\n",year);
		leapYear=1;
	}else{
		printf("%d不是闰年\n",year);
		leapYear=0;
	}
	return leapYear;
}

int main(void)
{
	int year;
	printf("请输入一个年份year(4位十进制整数):");
	scanf("%d",&year);
	isLeapYear(year);
	return 0;
}
