#include "test.h"
/*********************************************************************************
题目描述：
	输入一个数n(1<=n<=200),然后输入n个数值各不相同的数，再输入一个值x，
输出这个值在数组中的下标（从0开始，若不在数组中则输出-1）
输入格式：
	测试数据有多组，输入n（1<=n<=200），接着输入n个数，然后输入x
输出格式：
	对于每组输入，请输出结果。
样例输入： 
4
1 2 3 4
3
样例输出：
2 
**********************************************************************************/
void practice_3(){
	int a[200] ={0};
	int n;
	int mid;
	int find;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&mid);
		a[i] = mid;
	}
	scanf("%d",&find);
	int flag = 0;
	for(int i = 0;i < n ; i++){
		if(a[i]==find)
		{
			flag = 1;
			printf("%d\n",i);
			break;
		}
	}
	if(flag==0)
		printf("-1\n");
	
}
