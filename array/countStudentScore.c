// 已知M个学生(5个)的N门课(7门)的成绩,分别计算每位学生的平均成绩和每门课程的平均成绩
#include "stdio.h"
#define STUDENT_NUM 3
#define CLASS_NUM 5

int main(void){
	int studentsScores[STUDENT_NUM][CLASS_NUM]={{88,75,81,91,75},{79,78,82,93,81},{99,79,92,88,76}};
	int classScores[CLASS_NUM][STUDENT_NUM];
	int i,j;
	for(i=0;i<STUDENT_NUM;i++){
		float studentScoreAvarage=0.0,studentScoreCount=0.0;
		for(j=0;j<CLASS_NUM;j++){
			// 打印学生科目成绩
			printf(" %d ",studentsScores[i][j]);
			// 累加该学生总成绩
			studentScoreCount+=(float)studentsScores[i][j];
			classScores[i][j] = studentsScores[j][i];
		}
		studentScoreAvarage = (float)(studentScoreCount/CLASS_NUM);
		printf("第%d位学生的平均成绩是%f分\n",i+1,studentScoreAvarage);
	}
	for(i=0;i<CLASS_NUM;i++){
		float classScoreAvarage=0.0,classScoreCount=0.0;
		for(j=0;j<STUDENT_NUM;j++){
			// 累加该学科总成绩
			classScoreCount+=(float)classScores[i][j];
		}
		classScoreAvarage = (float)(classScoreCount/STUDENT_NUM);
		printf("第%d门科目的平均成绩是%f分\n",classScoreAvarage);
	}
}
