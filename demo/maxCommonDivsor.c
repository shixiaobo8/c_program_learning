#include <stdio.h>
// 使用辗转相除法求两个正整数的最大公约数

int getCommonDivsor(int x,int y)
{
	//printf("%d,%d",x,y);
	int r;
	while(y){
		r=x%y;
		x=y;
		y=r;
	}
	printf("x,y的最大公约数是:%d\n",x);
}

int main(void){
	int x,y;
	printf("请输入两个正整数:");
	scanf("%d,%d",&x,&y);
	getCommonDivsor(x,y);
	return 0;
}
