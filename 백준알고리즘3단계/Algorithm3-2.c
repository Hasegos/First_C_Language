#include<stdio.h>

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
   // ��� 1
    int t = 0,a,b;
    scanf("%d",&t);
    for(int i = 1; i <= t; i ++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    // ��� 2
    int i = 1;
    while (i <= t)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        i++;
    }
    
    return 0;
}