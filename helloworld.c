#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr1[]="abc";//数组 字符串包含0 --- 'a' 'b' 'c' '\0'
    char arr2[]={'a','b','c',0};//'\0'=0 指字符串的结束标志
    //'a'-97 数据在计算机上存储时，存储于的是二进制 ASCII编码
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    system("pause");
    return 0;
    }