#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0&&x%5==0&&x%7==0)
       printf("%d���Ա�3��5��7����\n",x);
    else if(x%3==0&&x%5==0)
       printf("%d���Ա�3��5����\n",x);
    else if(x%3==0&&x%7==0)
       printf("%d���Ա�3��7����\n",x);
    else if(x%7==0&&x%5==0)
       printf("%d���Ա�5��7����\n",x);
    else if(x%3==0)
       printf("%d���Ա�3����\n",x);
    else if(x%5==0)
       printf("%d���Ա�5����\n",x);
    else if(x%7==0)
       printf("%d���Ա�7����\n",x);
    else 
       printf("%d�����Ա�3��5��7�κ�һ��������\n",x);
    system("pause");
    return 0;
}
