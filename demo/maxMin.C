#include <stdio.h>
// 从键盘输入若干个数,求其中的最大者和最小者,直到输入0为止
int main(void)
{
	int i;
	int max=0;
	int min=0;
	for(i=0;;i++){
		int m;
		printf("请输入多个数字中的1个数字,用来求最大值和最小值,输入0表示输入结束:");
		scanf("%d",&m);
		if(m!=0){
			if(m>max){
				max=m;
			}else if(m<min){
				min=m;
			}
		}else{
			printf("输入的一组数字中最大值是%d,最小值是%d\n",max,min);
			break;
		}
		
	}
	return 0;
}
