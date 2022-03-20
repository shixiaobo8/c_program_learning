#include "stdio.h"
// 根据考试成绩的等级打印百分制分数段
void printScoreLevel(char scoreCh1,char scoreCh2)
{
	switch(scoreCh1){
		case 'A':
			switch(scoreCh2){
				case '+':
					printf("你的考试成绩为100分\n");break;
				case '-':
					printf("你的考试成绩为85分\n");break;
				default:
					printf("你的考试成绩为90分\n");break;
			}
			break;
		case 'B':
			switch(scoreCh2){
				case '+':
					printf("你的考试成绩为80分\n");break;
				case '-':
					printf("你的考试成绩为70分\n");break;
				default:
					printf("你的考试成绩为75分\n");break;
			}
			break;
		case 'C':
			switch(scoreCh2){
				default:
					printf("你的考试成绩为60分\n");break;
			}
			break;
		case 'D':
			switch(scoreCh2){
				default:
					printf("你的考试成绩不及格\n");break;
			}
			break;
		default:
				printf("你的考试成绩不在段位里面....\n");
	}
}

int main(void){
	char socreCh1,socreCh2;
	printf("请输入学生的成绩级别(支持A/A+/A-/B/B+/B-/C-/C+/C/D/D+/D-)");
	scanf("%c%c",&socreCh1,&socreCh2);
	printf("%c%c\n",&socreCh1,&socreCh2);
	printScoreLevel(socreCh1,socreCh2);
}
