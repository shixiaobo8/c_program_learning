#include <stdio.h>
#include <stdlib.h>
// 从键盘输入数据和运算符,以'a运算符b'的形式进行加,减,乘,除四则运算,并输出计算结果

void operation(int a,int b,char c)
{
	int res;
	switch(c){
		case '+':
			res = a+b;	
			break;
		case '-':
			res = a-b;
			break;
		case '*':
			res = a*b;
			break;
		case '/':
			res = a/b;
			break;
		default:
			printf("未知的或为定义的运算符号错误\n");
			exit(1);
	}
	printf("%d%c%d=%d\n",a,c,b,res);
}

int main(void)
{
	int a;
	int b;
	char c;
	printf("请输入两个数:");
	scanf("%d,%d",&a,&b);
	printf("请输入操作运算符:");
	getchar();
	scanf("%c",&c);
	//printf("%c",c);
	operation(a,b,c);
}
