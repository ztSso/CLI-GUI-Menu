#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch ='A';
    char str[20]="www.runoob.com";
    float flt=10.234;
    int no=150;
    double dbl=20.123456;
    /*��printf�����У�
    %dΪʮ�����з�������
    %nΪʮ�����޷�������
    %fΪ������
    %s �ַ���
    %p ָ���ֵ
    %e ָ����ʽ�ĸ�����
    %x,%X �޷�����ʮ�����Ʊ�ʾ������
    %o �޷����԰˽��Ʊ�ʾ������
    %g �������ֵ����%e ����%f ������������Ƚ�С�ķ�ʽ���
    %p �����ַ��
    %lu 32λ�޷�������
    %llu 64λ�޷�������
    */
    printf("�ַ�Ϊ%c\n",ch);
    printf("�ַ���Ϊ%s\n",str);
    printf("������Ϊ%f\n",flt);
    printf("����Ϊ%d\n",no);
    printf("˫����ֵΪ%lf\n",dbl);
    printf("�˽���ֵΪ%o\n",no);
    printf("ʮ������ֵΪ%x\n",no);
    system("pause");
    return 0;
}