#include<stdio.h>
#include<stdlib.h>

#define LENGTH 10 //预处理器定义常量的形式
#define WIDTH 5
#define NEWLINE '\n'

int main()
{

    int area;
    area=LENGTH*WIDTH;
    printf("value of area : %d",area);
    printf("%c",NEWLINE);
    system("pause");
    return 0;
}