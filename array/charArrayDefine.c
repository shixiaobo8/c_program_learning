#include <stdio.h>
// 字符数组 
int main(void){
	int i;
	// 定义一维字符数组
	char c1[6]={'H','e','l','l','o','\0'};
	for(i=0;i<sizeof(c1)/sizeof(c1[0]);i++){
		printf(" %c ",c1[i]);
	}
	printf("\n");
	// 用字符串初始化字符数组 字符数要+1  只能在初始化赋值的时候使用字符串赋值, 不能在语句中直接将一个字符串赋予一个字符串数组
	char c2[8]={"hello,c"};
	for(i=0;i<sizeof(c2)/sizeof(c2[0]);i++){
		printf(" %c ",c2[i]);
	}
	// 用字符串初始化字符数组  花括号可以省略, 只能在初始化赋值的时候使用字符串赋值, 不能在语句中直接将一个字符串赋予一个字符串数组
	char c3[8]="hello,c";
	for(i=0;i<8;i++){
		printf(" %c ",c3[i]);
	}
	printf("\n");
	// 定义二维字符数组
	char c4[2][6]={{'H','e','l','l','o'},{'c','\0'}};
	for(i=0;i<sizeof(c4)/sizeof(c4[0]);i++){
		printf(" %c ",c4[i]);			
	}
	printf("\n");
	// 这种做法是错误的
	//c4[2][6]="hello,bob";
	
	// 一维字符串初始化
	char c5[]={'h','i',',','b','o','b'};
	for(i=0;i<sizeof(c5)/sizeof(c5[0]);i++){
		printf(" %c ",c5[i]);
	}
	printf("\n");
	char c6[]={'g','o','\0','r','u','n','\0'};
	for(i=0;i<sizeof(c6)/sizeof(c6[0]);i++){
		printf("%c",c6[i]);
	}
	printf("\n");
	// 用字符串初始化二维数组
	//c5[2][6]={"hello","bob"};

	return 0;
}
