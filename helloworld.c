#include <stdio.h>
//sizeof是用来计算一个类型的大小的
//单位是**字节**
int main()
{
    printf("%d\n",sizeof(char));
    /*char的类型大小：1个字节（BYTE）==8位（bit） 所以有256种变化.
   1）有符号字符型（signed char）：存储范围为-128~127
    2）无符号字符型（unsigned char):存储范围为0~255 */
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    /*整形int --4个字节；长整形long int --4个字节；短整形short int --2个字节
    c语言规定：sizeof(long)>=sizeof(int)*/
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    /*单精度浮点型：float--4个字节 双精度浮点形double--8个字节
    float一般在计算机中存储占用4个字节，32为，有效位数为7位；
    double 在计算机中存储占用8字节，64位，有效位数为16位。*/
    return 0;
}