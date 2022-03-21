#include <stdio.h>
#include <math.h>
// 将一个正整数的各位数字逆序输出
int reserverNum(int num)
{
	int tempNum = num;
	int newNum;
	int count=0;
	// 判断输入的数字是几位数
	do{
			tempNum=tempNum/10;
			count++;
	}while(tempNum!=0);
	printf("%d是一个%d位数\n",num,count);

	
	int n=0;
	while(n<=count){
		newNum += (num%10) * (pow(10,count-n));
	    n++;	
	}
	
	printf("num 反转后的数字是%d\n",newNum);
	return newNum;
}

int main(void)
{
	int num;
	printf("请输入一个正整数");
	scanf("%d",&num);
	reserverNum(num);
	return 0;
}
