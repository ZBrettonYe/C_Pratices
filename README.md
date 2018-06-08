# C_Pratices
我的暑假C语言练习
## 题目
1. 输入2个整数，求两数的平方和并输出。[完成](/program/1.c)

2. 输入一个圆半径（r）当r>＝0时，计算并输出圆的面积和周长，否则，输出提示信息。[完成](/program/2.c)

3. 函数y=f(x)可表示为：
![](/image/1.png)[完成](/program/3.c)

4. 编写一个程序,从4个整数中找出最小的数,并显示此数。[完成](/program/4.c)

5. 有一函数当x<0时y=1，当x>0时，y=3，当x=0时y=5，编程，从键盘输入一个x值，输出y值。[完成](/program/5.c)

6. 从键盘输入两个数，求出其最大值（要求使用函数完成求最大值，并在主函数中调用该函数）

7. 从键盘输入你和你朋友的年龄，编成判断谁的年龄最大，并打印最大者的年龄。

8. 键盘输入2个加数，再输入答案，如果正确，显示“right”，否则显示“error”

9. 编一程序每个月根据每个月上网时间计算上网费用，计算方法如下:
     要求当输入每月上网小时数,显示该月总的上网费用(6分)

10. 神州行用户无月租费，话费每分钟0.6元，全球通用户月租费50元，话费每分钟0. 4元
输入一个月的通话时间，分别计算出两种方式的费用，判断哪一种合适。

11. 个人所得税计算，应纳税款的计算公式如下：
     | 收入 | 税率 |
     | :--- | :--- |
     | 收入&lt;＝1000元部分 | 0％ |
     | 2000元&gt;＝收入&gt;1000元的部分 | 5％ |
     | 3000元&gt;＝收入&gt;2000元的部分 | 10％ |
     | 6000元&gt;＝收入&gt;3000元的部分 | 15％ |
     | 收入&gt;6000元的部分 | 20％ |

     输入某人的收入，计算出应纳税额及实际得到的报酬。（7分）

     （如需连续计算多个人的纳税情况，直到输入负数为止，程序应如何改进？试写出程序）

12. 从键盘上输入一个百分制成绩score，按下列原则输出其等级：score≥90，等级为A；80≤score<90，等级为B；70≤score<80，等级为C；60≤score<70，等级为D；score<60，等级为E。

13. 编程设计一个简单的计算器程序。从键盘输入2个操作数，1个运算符，当运算符为加（+）、减（-）、乘（*）、除（/）时，输出计算结果

14. 从键盘输入10个整数，统计其中正数、负数和零的个数，并在屏幕上输出。

15. 编程序实现求1-200之间的所有数的乘积并输出。

16. 从键盘上输入10个数，求其平均值。

17. 编程序实现求1-1000之间的所有奇数的和并输出。

18. 有一个分数序列：2/1，3/2，5/3，8/5，13/8，21/13…… 编程求这个序列的前20项之和。

19. 用数组实现以下功能：输入5个学生成绩，而后求出这些成绩的平均值并显示出来。

20. 用循环的方法构造一个5行5列的二维数组，使主对角线上的变量为1，其它为0，并将数组中所有项按行按列显示出来。

21. 求一个3×3矩阵对角线元素之和。从键盘输入矩阵元素的值并输出和的值.

22. 输入n的值，n代表行数，输出如图所示的图形。（6分）
```
     *

     *  *  *

     *  *  *  *  *

     *  *  *  *  *  *  *    (此图为n＝4时的输出结果)
```
23. 从键盘输入30名学生的成绩数据，求其中的最高分、最低分和平均分。（提示：用数组存放成绩数据）

24. 从键盘输入某班学生某门课的成绩及其学号（班级人数最多40人，具体人数由键盘输入），输出该班最高分和最低分及其学生学号；并输出该班该课程的总分和平均分。请编写程序。

25. 将一个有5个元素的数组中的值(整数)按逆序重新存放。

     例: 原来顺序为:8、6、5、4、1，要求改为1、4、5、6、8

26. 从键盘上输入一个2*3的矩阵，将其转置后形成3*2的矩阵输出。

27. 编写两个函数分别求两个整数的最小公倍数和最大公约数，用主函数调用这两个函数并输出结果。两个整数由键盘输入。

28. 输入一个3*3矩阵,求出其转置矩阵,并求出两个矩阵的和.

29. 从键盘输入10名学生的成绩数据，按成绩从高到低的顺序排列并输出。（提示：用数组存放成绩数据）

30. 定义一个5行3列的数组，从键盘输入各数组元素的值，计算各数组元素之和。

31. 编写程序，交换两个数组中的对应元素。

32. 从键盘上输入一个4*3的整型数组，找出数组中的最小值及其在数组中的下标。

33. 编程实现如下功能：从键盘输入一行字符，统计其中大写英文字符，小写英文字符和其他字符的个数。

34. 编程实现如下功能：

     1）在主函数中，实现从键盘输入10名学生某门课的成绩，保存在一维数组中；调用排序函数；对排序后的数组中的元素按从高到低打印输出。

     2）编写排序函数，使用数组名做函数参数，实现对该成绩的排序。

35. 编程实现如下功能：

     实现从键盘输入两个字符串，分别存入两个不同的字符数组中；将两个字符串连接为一个字符串，并打印输出连接后的整个字符。

36. 猜数游戏。系统随机产生一个整数，通过键盘输入数据猜数，猜对为止，并要求统计猜的次数。注：rand()函数可以产生0～32767间的正整数，程序中需包含stdlib.h。

37. 输入两个整数，利用指针变量作为函数参数，编程实现两数互换功能，并将交换后的数据重新输出。

38. 随机输入若干个学生的体重，以输入负数或零结束，分别求最重和最轻的体重，并计算平均体重。

39. 输入m，k的值，编程求下面表达式的值：（要求编写一个求阶乘的函数，调用函数实现本题）
![](/image/2.png)

40. 编写程序，其中自定义一函数，用来判断一个整数是否为素数，主函数输入一个数，输出是否为素数。
