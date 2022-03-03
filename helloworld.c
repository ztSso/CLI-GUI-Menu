#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;//int定义变量a,b,c
    scanf("%d%d",&a,&b);//输入a,b
    c=a;//使变量c=变量a
    a=b;
    b=c;
    printf("a=%d,b=%d\n",a,b);//输出a,b
    system("pause");
    return 0;
    }