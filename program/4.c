/**
作者：ZBrettonYe
时间：2018年6月8日
问题：编写一个程序,从4个整数中找出最小的数,并显示此数。
**/

#include<stdio.h>

int main() {
  int arr[4],low;
  printf("Input 4 integers: ");
  for(int i =0; i<4;i++){
    scanf("%d",&arr[i]);
  }
  low = arr[0];
  for(int i =1; i<4;i++){
    if(low > arr[i]){
      low = arr[i];
    }
  }
  printf("In numbers %d, %d, %d, and %d, %d is the lowest number",arr[0],arr[1],arr[2],arr[3],low);
  return 0;
}
