#include<stdio.h>

//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
   // ��� 1
    int t,a,b;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
    }
    // ��� 2
    int i = 1;
    while (i <= t)
    {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
        i++;
    }

    return 0;
}