#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,a,b,c;//定义变量num,a,b,c
    scanf("%d",&num);//输入num
    a=num/100;//a等于num输入的三位整数的百位数。int为整型，所a的取值为整数
    b=(num-100*a)/10;
    c=num%10;
    a=c*100+b*10+a;
    printf("%d\n",a);
    system("pause");
    return 0;
}