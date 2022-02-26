#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch ='A';
    char str[20]="www.runoob.com";
    float flt=10.234;
    int no=150;
    double dbl=20.123456;
    /*在printf函数中：
    %d为十进制有符号整数
    %n为十进制无符号整数
    %f为浮点数
    %s 字符串
    %p 指针的值
    %e 指数形式的浮点数
    %x,%X 无符号以十六进制表示的整数
    %o 无符号以八进制表示的整数
    %g 把输出的值按照%e 或者%f 类型中输出长度较小的方式输出
    %p 输出地址符
    %lu 32位无符号整数
    %llu 64位无符号整数
    */
    printf("字符为%c\n",ch);
    printf("字符串为%s\n",str);
    printf("浮点数为%f\n",flt);
    printf("整数为%d\n",no);
    printf("双精度值为%lf\n",dbl);
    printf("八进制值为%o\n",no);
    printf("十六进制值为%x\n",no);
    system("pause");
    return 0;
}