#include<stdio.h>

//�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
    // ��� 1
    int n;
    scanf("%d",&n);
    for(int i = n; i >= 1; i--)
    {
        printf("%d\n",i);
    }
    // ��� 2
    int i = n;
    while (i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}