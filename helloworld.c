#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr1[]="abc";//���� �ַ�������0 --- 'a' 'b' 'c' '\0'
    char arr2[]={'a','b','c',0};//'\0'=0 ָ�ַ����Ľ�����־
    //'a'-97 �����ڼ�����ϴ洢ʱ���洢�ڵ��Ƕ����� ASCII����
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    system("pause");
    return 0;
    }