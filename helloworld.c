#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0&&x%5==0&&x%7==0)
       printf("%d可以被3、5、7整除\n",x);
    else if(x%3==0&&x%5==0)
       printf("%d可以被3、5整除\n",x);
    else if(x%3==0&&x%7==0)
       printf("%d可以被3、7整除\n",x);
    else if(x%7==0&&x%5==0)
       printf("%d可以被5、7整除\n",x);
    else if(x%3==0)
       printf("%d可以被3整除\n",x);
    else if(x%5==0)
       printf("%d可以被5整除\n",x);
    else if(x%7==0)
       printf("%d可以被7整除\n",x);
    else 
       printf("%d不可以被3、5、7任何一个数整除\n",x);
    system("pause");
    return 0;
}
