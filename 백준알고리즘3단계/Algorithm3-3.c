#include<stdio.h>

//n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    // ��� 1
    int n,sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d",sum);

    // ��� 2
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d",sum);

    return 0;
}