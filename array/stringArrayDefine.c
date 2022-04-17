#include <stdio.h>
// 字符串的输入与输出
int main(void)
{
	char str[10];
	printf("请整体输入字符串:");
	// 注意这里使用的是str的首地址不需要加 &str
	scanf("%s",str);
	printf("\n您输入的字符串为:%s\n",str);
	// 输入遇到空格和回车时会自动加上字符数组结束符\0,结束录入
	char str1[10][5],str2[5][6];
	scanf("%s%s",str1,str2);
	printf("\nstr1=%s,str2=%s",str1,str2);
	// 例3 字符串在字符数组中遇到\0 \t就会认为结束然后存入到字符数组中
	char str3[15]="234\ts\0sd\0fe";
	printf("\nstr3=%s",str3);
	// 例4 使用gets 存在危险性 新版版已经废弃不建议使用 和 puts 函数可以整体输入和整体输出
	char str4[50];
	printf("\n请输入整体字符串:");
	scanf("%s",str4);
	printf("\n请输入整体字符串(使用puts输出):\n");
	puts(str4);
	
	return 0;
}
