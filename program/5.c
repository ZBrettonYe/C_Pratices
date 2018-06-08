/**
作者：ZBrettonYe
时间：2018年6月8日
问题：有一函数当x<0时y=1，当x>0时，y=3，当x=0时y=5，编程，从键盘输入一个x值，输出y值。
**/

#include<stdio.h>

int main(){
  int x,y;
  printf("Input value for x: ");
  scanf("%d",&x);

  if(x<0){
    y=1;
  } else if(x>0){
    y=3;
  } else {
    y=5;
  }
  printf("while x = %d, y = %d",x,y);
  return 0;
}
