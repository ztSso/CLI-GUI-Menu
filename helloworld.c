#include<stdio.h>
#include<stdlib.h>

#define LENGTH 10 //Ԥ���������峣������ʽ
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