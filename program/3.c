/**
作者：ZBrettonYe
时间：2018年6月8日
问题：表示一个函数f(x); 可见图：https://github.com/ZBrettonYe/C_Pratices/raw/master/image/1.png
**/

#include<stdio.h>

int main(){
  int x,y;
  // input data
  printf("Input the value of x: ");
  scanf("%d",&x);
  //define f(x)
  if(x<0){
    y= 2*x+1;
  }
  else if(x == 0){
    y = 0;
  }
  else{
    y = 2*x-1;
  }
  printf("When x = %d, f(x) = %d",x,y);
  return 0;
}
