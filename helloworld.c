#include<stdio.h>
#include<stdlib.h>
//while 语句使用
//while(表达式) 语句 /*循环体*/
//先计算表达式 当表达式=1；执行循环体；然后判断表达式的值，1=循环；否则循环结束，执行while下一条语句
int main()
{
   int i,n,S;//定义变量i，n，S
   scanf("%d",&n);//输入变量n的值
   i=1;//赋值i
   S=0;
   while (i<=n)//开始循环，当i<=n为0时，循环结束。
   {
      S+=i;
      i++;//在循环体中应该有使i增值并最终大于n的语句，
   }
   printf("S=%d\n",S);
   system("pause");
   return 0;
}