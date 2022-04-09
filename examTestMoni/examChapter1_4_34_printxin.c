#include <stdio.h>
/**
 *   打印如下图形
        *****
		 *****
		  *****
		   *****
*/

int main(void)
{
	int size=8,position,printXinSize=5,xinPostion,line;
	for(line=1;line<=4;line++)
	{
		for(position=1;position<=8;position++)
		{	
			if(position<=position+5){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
