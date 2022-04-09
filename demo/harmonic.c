#include "stdio.h"
// 求调和级数中的第多少项的值大于10,调和级数的第n项为1+1/2+1/3+1/4+....+1/n;
#define LIMIT 10
int main(void)
{
	int n;
	int m;
	for(m=0;;m++){
		n+=m+(1/(m+1));
		if(n==LIMIT){
			printf("m=%d\n",m);
			break;
		}
		break;
	}
	return 0;
}
