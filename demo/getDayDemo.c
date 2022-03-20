#include <stdio.h>
// 从键盘输入年和月,输出该月的天数
int getDay(int year,int month)
{
	int days;
	switch(month){
		case 1:
			days = 31;break;
		case 2:
			// 判断闰年
			if(year%400==0||(year%4==0&&year%100!=0)){
				days = 28;
			}else{
				days = 29;
			}break;
		case 3:
			days = 31;break;
		case 4:
			days = 30;break;
		case 5:
			days = 31;break;
		case 6:
			days = 30;break;
		case 7:
			days = 31;break;
		case 8:
			days = 31;break;
		case 9:
			days = 30;break;
		case 10:
			days = 31;break;
		case 11:
			days = 30;break;
		case 12:
			days = 31;break;
			break;
		default: printf("输入的月份不存在!\n");
	}
	printf("%d\n",days);
	return days;
}

int main(void)
{
	int year,month,days;
	printf("请输入要查询的年份:");
	scanf("%d",&year);
	printf("请输入要查询的月份:");
	scanf("%d",&month);
	days = getDay(year,month);
	printf("%d年%d月有%d天\n",year,month,days);
	return 0;
}
