/**
作者：ZBrettonYe
时间：2018年6月20日
问题：从键盘输入两个数，求出其最大值（要求使用函数完成求最大值，并在主函数中调用该函数）
**/

#include<stdio.h>

int main(){
  int a,b;
  printf("输入2个数字：");
  scanf("%d %d",&a,&b);
  if(a>b){
    printf("%d 比 %d 大",a,b);
  }
  else if(a<b){
    printf("%d 比 %d 大",b,a);
  }
  else{
    printf("2个数一样大");
  }
  return 0;
}
