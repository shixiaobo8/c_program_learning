#include "stdio.h"
// 使用do while 实现 1...100 的和

int main(void)
{
	int sum=0;
	int num=1;
	do{
		sum += num;
		num ++;
	}while(num<=100);
	printf("1..100的和是:%d\n",sum);
	return 0;
}
