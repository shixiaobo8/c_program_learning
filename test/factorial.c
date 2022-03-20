#include <stdio.h>
// 计算10的阶乘 !10

int main(void)
{
	int c=1,i=1,b=10;
	printf("10的阶乘计算为:\n!10=");
	while(i<b){
		c=c*(i+1);
		if(i==1){
			printf("\"%dx%d",i,i+1);
		}else if(i==9){
			printf("x%d\"",i+1);
		}else {
			printf("x%d",i+1);
		}
		i=i+1;
	}
	printf("=%d\n",c);
}
