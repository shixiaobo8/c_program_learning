#include "stdio.h"
// 从键盘输入平面上的一个点的坐标值,判断其所在的象限

int whichQuadrant(x,y)
{
	int quadrant;
	if(x>0&&y>0){
		quadrant = 1; // 处于第一象限
		printf("该坐标点位于第%d象限上\n",quadrant);
	}else if(x<0&&y>0){
		quadrant = 2; // 处于第二象限
		printf("该坐标点位于第%d象限上\n",quadrant);
	}else if(x<0&&y<0){
		quadrant = 3; // 处于第三象限
		printf("该坐标点位于第%d象限上\n",quadrant);
	}else if(x>0&&y<0){
		quadrant = 4; // 处于第四象限
		printf("该坐标点位于第%d象限上\n",quadrant);
	}else if(x==0){
		quadrant = 0;
		printf("该坐标点位于x轴上\n");
	}else if(y==0){
		quadrant = 0;
		printf("该坐标点位于y轴上\n");
	}
	return quadrant;
}

int main(void)
{
	int x,y;
	printf("请输入平面坐标系中的x,y值:");
	scanf("%d,%d",&x,&y);
	whichQuadrant(x,y);
}
