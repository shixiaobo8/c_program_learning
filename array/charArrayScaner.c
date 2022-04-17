#include <stdio.h>
// 从键盘录入字符数组并输出
int main(void)
{
	int i,j;
	char c1[2][2];
	for(i=0;i<sizeof(c1)/sizeof(c1[0]);i++){
		//for(j=0;j<sizeof(c1)/sizeof(c1[0]);j++){
		//printf("请输入字符数组c1[%d]中的字符:",i);
			scanf("%s",c1[i]);
			//gets(c1[i]);
			//scanf("%s",c1[i][j]);
		//}
	}
	//printf("\n录入的字符数组为:\n");
	for(i=0;i<sizeof(c1)/sizeof(c1[0]);i++){
		printf("%s\n",c1[i]);
		//puts(c1[i]);
	}
	return 0;
}
