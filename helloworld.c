#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,a,b,c;//�������num,a,b,c
    scanf("%d",&num);//����num
    a=num/100;//a����num�������λ�����İ�λ����intΪ���ͣ���a��ȡֵΪ����
    b=(num-100*a)/10;
    c=num%10;
    a=c*100+b*10+a;
    printf("%d\n",a);
    system("pause");
    return 0;
}