/**
作者：ZBrettonYe
时间：2018年6月8日
问题：输入2个整数，求两数的平方和并输出
**/

#include<stdio.h>
#include<math.h>

int main(){
	double num_1,num_2;
	double sum;
	//input the data 
	printf("Input the 1st number: ");
	scanf("%lf",&num_1);
	printf("Input the 2nd number: ");
	scanf("%lf",&num_2);
	//math 
	sum = pow(num_1,2);
	sum += pow(num_2,2);
	printf("The quadratic sum of %0.1lf and %0.1lf is %0.1lf",num_1,num_2,sum);
	return 0;	
}