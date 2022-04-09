#include <stdio.h>
// 输出10-100 之间的素数

void isPrimeNumber(number)
{
	int i;
	int m=1; // 假设为真
	for(i=2;i<number;i++){
		if(number%i==0){
			m=0; // 为假
			//printf("m=%d",m);
			break;
		}
	}
	if(m==1){
		printf(" %d ",number);
	}
}

int main(void)
{
	int i;
	int j=100;
	for(i=10;i<=j;i++){
		isPrimeNumber(i);
	}
	return 0;
}
