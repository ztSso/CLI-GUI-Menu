#include <stdio.h>
int main()
{ char ch1,ch2;
    ch1='a';ch2='B';
    printf("ch1=%c,ch2=%c\n",ch1-32,ch2+32);
    printf("ch1+200=%d\n",ch1+200);
    printf("ch1+200=%c\n",ch1+200);
    printf("ch2+256=%d\n",ch1+256);
    printf("ch2+256=%c\n",ch1+256);
    return 0;
}