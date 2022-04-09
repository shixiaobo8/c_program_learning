#include <stdio.h>
// 数组的定义
int main(void)
{
	int a[]={1,2,3,4,5},b;
	float c[]={1.0,2.0,3.0},d;
	char e[]={'H','e','l','l','o',' ','c','A','a','r','r','y'},f;
	double g[5],h;
	//a={1,2,3,4,5}
	int i;
	printf("%d\n",a[4]);
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%#x===>%d(占用%d个字节)\n",a[i],a[i],sizeof(a[i]));
	}
	for(i=0;i<sizeof(c)/sizeof(c[0]);i++){
		printf("%#x===>%f(占用%d个字节)\n",c[i],c[i],sizeof(c[i]));
	}
	for(i=0;i<sizeof(e)/sizeof(e[0]);i++){
		printf("%#x===>%c(占用%d个字节)\n",e[i],e[i],sizeof(e[i]));
	}
	for(i=0;i<sizeof(g)/sizeof(g[0]);i++){
		printf("%#x===>%f(占用%d个字节)\n",g[i],g[i],sizeof(g[i]));
	}
}
