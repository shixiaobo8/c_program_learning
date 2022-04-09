#include <stdio.h>
// 对数组元素进行从小到大的冒泡排序

int main(void)
{
	int arr[]={13,10,12,6,8};
	int arr_count = sizeof(arr)/sizeof(arr[0]);
	int index,position;
	for(index=0;index<arr_count;index++){
		for(position=arr_count-1;position>=0;position--){
			if(arr[position]<arr[position-1]){
				int minValue,tempIndex;
				minValue = arr[position];
				arr[position] = arr[position-1];
				arr[position-1] = minValue;
				printf("    第%d轮中第%d个数和%d个数后的arr的值的结果为:\n",index+1,position,position-1);
				for(tempIndex=0;tempIndex<arr_count;tempIndex++){
					printf(" %d ",arr[tempIndex]);
				}
			}
			//printf("\n  第%d轮比较后arr 当前的值为:\n",index+1);
			//printf(" %d ",arr[position]);
		}
	}
	printf("冒泡排序后的arr的值的结果为:\n");
	for(index=0;index<arr_count;index++){
		printf(" %d ",arr[index]);
	}
}
