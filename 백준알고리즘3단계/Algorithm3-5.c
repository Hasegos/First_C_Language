#include<stdio.h>

//�ڿ��� N�� �־����� ��, 1���� N���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    // ��� 1
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    // ��� 2
    int i = 1;
    while (i <= n)
    {
        printf("%d\n",i);
        i++;
    }

    return 0;
}