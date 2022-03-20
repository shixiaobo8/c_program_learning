#include "stdio.h"
// 使用while 语句计算 1...100的和

int main(void)
{
	int n=0;
	int sum=0;
	while(n<=100){
		sum+=n;
		n++;
	}
	printf("1..100相加的和为:%d\n",sum);
}
