#include "stdio.h"
// 从键盘输入3个整数x,y和z,将这三个整数从大到小排序并输出

void orderNums(int x,int y,int z)
{
	if(x>y){
		if(y>z){
			printf("x>y>z\n");
		}else if(y<z){
			if(z>x){
				printf("z>x>y\n");
			}else{
				printf("x>z>y\n");
			}
		}
	}else if(x<y){
		if(y<z){
			printf("z>y>x\n");
		}else if(y>z){
			if(z>x){
				printf("y>z>x\n");
			}else{
				printf("y>x>z\n");
			}
		}
	}
}

int main(void)
{
	int x,y,z;
	printf("请输入三个整数x,y,z");
	scanf("%d,%d,%d",&x,&y,&z);
	orderNums(x,y,z);
	return 0;
}
