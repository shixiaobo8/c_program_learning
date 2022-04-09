#include <stdio.h>
// 从键盘输入6个数字,使用选择排序进行排序
int main()
{
	int i,j,arr[6];
	for(i=0;i<=5;i++){
		printf("请输入1个数字,进行选择排序:\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=5;i++){
		int min;
		for(j=5;j>i;j--){
			if(arr[j]<arr[i]){
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
		//arr[i] = min;
	}
	printf("选择排序后的数组的值为:\n");
	for(i=0;i<6;i++){
		printf(" %d ",arr[i]);
	}
	return 0;	
}
