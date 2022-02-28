#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int LENGTH =10;
    const int WIDTH = 5;
    const int NEWLINE = '\n';
    int area;

    area= LENGTH * WIDTH;
    printf("valur of area : %d",area);
    printf("%c",NEWLINE);
    system("pause");
    return 0;
}