#include<stdio.h>
#include<stdlib.h>

int main()
{
    float r,l,s,v;
    scanf("%f",&r);
    l=3.14*r*2;
    s=3.14*r*r;
    v=4.0/3*3.14*r*r*r;
    printf("圆周长：%f,圆面积：%f,圆球面积：%f\n",l,s,v);
    system("pause");
    return 0;

}