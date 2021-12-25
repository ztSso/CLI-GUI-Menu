#include <stdio.h>
int a=100;//全局变量：定义在大括号外。
int main()
{
    int b=10;//局部变量：定义在大括号的内部。
    printf("%d\n",a);//局部变量与全局变量命名起冲突时，局部变量优先。
    return 0;
}