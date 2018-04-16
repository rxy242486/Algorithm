#include "test.h"
//<挖掘机技术哪家强>
//题目描述：
//为了用事实说明挖掘机技术到底哪家强，PAT组织了一场挖掘机技能大赛。请根据比赛结果统计出技术最强的
//那个学校。
//输入格式：
//在第一行给出不超过10^5的正整数N，即参赛人数。随后N行，每行给出一位参赛者的信息和成绩，包括其所代表
//的学校的编号（从1开始连续编号）及其比赛成绩（百分制），中间以空格分隔
//输出格式：
//在一行中给出总得分最高的学校的编号及其总分，中奖以空格分隔。题目保证答案唯一，没有并列。
//输入样例：
//6
//3 65
//2 80
//1 100
//2 70
//3 40
//3 0
//输出样例：
//2 150
void practice_2(){
	int score[10][2] = {0};
	int N;
	int m,n,temp,mid;
	scanf("%d",&N);
	for(int i = 0;i < N;i++){
		scanf("%d %d",&m,&n);
		score[m][0] = m;
		score[m][1] += n; 
	} 
	//冒泡排序
	for(int i = 1;i < 10;i++){
		for(int j  = 0; j < 10 - i ; j++){
			if(score[j][1]<score[j+1][1]){
				temp = score[j+1][1];
				mid = score[j+1][0];
				score[j+1][1] = score[j][1];
				score[j+1][0] = score[j][0];
				score[j][1] = temp;
				score[j][0] = mid;
			}
		}
	}
	printf("%d %d",score[0][0],score[0][1]); 
}
