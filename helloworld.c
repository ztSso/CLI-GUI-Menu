#include<stdio.h>
#include<stdlib.h>
//while ���ʹ��
//while(���ʽ) ��� /*ѭ����*/
//�ȼ�����ʽ �����ʽ=1��ִ��ѭ���壻Ȼ���жϱ��ʽ��ֵ��1=ѭ��������ѭ��������ִ��while��һ�����
int main()
{
   int i,n,S;//�������i��n��S
   scanf("%d",&n);//�������n��ֵ
   i=1;//��ֵi
   S=0;
   while (i<=n)//��ʼѭ������i<=nΪ0ʱ��ѭ��������
   {
      S+=i;
      i++;//��ѭ������Ӧ����ʹi��ֵ�����մ���n����䣬
   }
   printf("S=%d\n",S);
   system("pause");
   return 0;
}