/**
作者：ZBrettonYe
时间：2018年6月8日
问题：输入一个圆半径（r）当r>＝0时，计算并输出圆的面积和周长，否则，输出提示信息。
**/

#include<stdio.h>
#include<math.h>

int main(){
  // input the data
  double r,A,l;
  printf("Input the radius of the circle: ");
  scanf("%lf",&r);
  if(r >= 0){
    //math
    A = M_PI *pow(r,2);
    l = 2 * r *M_PI;

    printf("The Area of this circle is %0.2lf\n",A);
    printf("The Perimeter of this circle is %0.2lf\n",l);
  }
  else{
    printf("Error! The radius can not be %0.2lf",r);
  }
  return 0;
}
