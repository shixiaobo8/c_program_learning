#include "stdio.h"
// 从键盘输入一个3行4列的矩阵,将其转置后形成4行3列的矩阵输出

// 矩阵反转输出
printReverseArray(int sArr[3][4]){
	int dArr[4][3],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			dArr[i][j]=sArr[j][i];
		}
	}
	// 反转后的数组打印
	for(i=0;i<4;i++){
		printf("\n反转后的数组Arr[%d]=\n",i);
		for(j=0;j<3;j++){
			printf(" %d ",dArr[i][j]);
		}
	}
}

int main(void){
	int sArr[3][4],sindex,dindex;
	for(sindex=0;sindex<3;sindex++){
		for(dindex=0;dindex<4;dindex++){
			printf("请输入矩阵中第%d个数组的第%d个数:",sindex,dindex);
			scanf("%d",&sArr[sindex][dindex]);
		}
	}
	printReverseArray(sArr);
	return 0;
}
