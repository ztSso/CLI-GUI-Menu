#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;//int�������a,b,c
    scanf("%d%d",&a,&b);//����a,b
    c=a;//ʹ����c=����a
    a=b;
    b=c;
    printf("a=%d,b=%d\n",a,b);//���a,b
    system("pause");
    return 0;
    }