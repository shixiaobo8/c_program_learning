#include <stdio.h>
// 从键盘输入一个小于1000的自然数,判断其是否是自守数(自守数是指一个数的平方的尾数等于其自身的自然数,例如:25*25=625)

int isAutomorphicNumber(int num)
{
	if(num<10){
		if((num*num-num)%10==0){
			printf("num=%d是自守数\n",num);
		}else{
			printf("num=%d不是自守数\n",num);
		}
	}else if(10<=num<100){
		if((num*num-num)%100==0){
			printf("num=%d是自守数\n",num);
		}else{
			printf("num=%d不是自守数\n",num);
		}
	}else if(100<=num<1000){
		if((num*num-num)%1000==0){
			printf("num=%d是自守数\n",num);
		}else{
			printf("num=%d不是自守数\n",num);
		}
	}
}

int main(void)
{
	int num;
	printf("请输入一个小于1000的自然数:");
	scanf("%d",&num);
	isAutomorphicNumber(num);
	return 0;
}
